Attribute VB_Name = "Module11"
Sub COMlogger()

Dim A As String
Dim i As Integer

'�����ݒ�
ec.COMn = 3 'COM3���w��
ec.Setting = "9600,n,8,2" '�ʐM����(�{�[���[�g�C�p���e�B�r�b�g���C�f�[�^�r�b�g���C�X�g�b�v�r�b�g��)�̐ݒ�
ec.HandShaking = ec.HANDSHAKEs.RTSCTS '�ʐM�n���h�V�F�[�N�̐ݒ�
ec.Delimiter = ec.DELIMs.CrLf '�f�[�^�̋�؂�������������ݒ�

'�f�[�^��������
Worksheets.Add

'�f�[�^�̎�M�Ə���
For i = 1 To 1000
    A = ec.AsciiLine
    ec.InBufferClear
    Cells(i + 2, "B").Value = i
    Cells(i + 2, "C").Value = Val(A)
Next i

'�I������
ec.COMn = -1 '�|�[�g�J��

End Sub
