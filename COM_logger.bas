Attribute VB_Name = "Module11"
Sub COMlogger()

Dim A As String
Dim i As Integer

'初期設定
ec.COMn = 3 'COM3を指定
ec.Setting = "9600,n,8,2" '通信条件(ボーレート，パリティビット数，データビット数，ストップビット数)の設定
ec.HandShaking = ec.HANDSHAKEs.RTSCTS '通信ハンドシェークの設定
ec.Delimiter = ec.DELIMs.CrLf 'データの区切りを示す文字列を設定

'データ処理準備
Worksheets.Add

'データの受信と処理
For i = 1 To 1000
    A = ec.AsciiLine
    ec.InBufferClear
    Cells(i + 2, "B").Value = i
    Cells(i + 2, "C").Value = Val(A)
Next i

'終了処理
ec.COMn = -1 'ポート開放

End Sub
