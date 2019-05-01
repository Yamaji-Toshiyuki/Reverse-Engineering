<!-- $size: 16:9 -->

![bg](Signal_Recorder.png)

<span style="font-size: 90px;">
  <div style="font-weight: 900;">
    <c style="color: midnightblue;">
   		自分の部屋を快適にしよう！
    </c>
  </div>
</span>

<!-- *footer : はるゆき @haruyuki_16278 -->

-------------------------
![bg](Signal_Recorder.png)

# とりあえず自己紹介でもしとく？ 

+ 	名前：はるゆき
+	Twitter : @haruyuki_16278
![icon 50% center](images/自画像.jpg)

めんどくなったのであとは当日の俺が喋ってくれます．

-------------------------
![bg](Signal_Recorder.png)

# 今日話す内容

デバイス系の話をしようと思っていましたが
ちょっとむずかしい通信系の話も入ってきそう

「デバイス苦手だなあ」とか「なんのはなししてるかわからん」
という方は香川県のうどんについて考えていてください．

-------------------------
![bg](Signal_Recorder.png)

# 今までの経過

+ 	お部屋魔改造か... → とりあえずリモコンからやるか
	→リモコンの信号解析 (技術書典6 #kosen16s本を呼んでね！)
+	.....

	 ↑ 今ここ
    
-------------------------
![bg](Signal_Recorder.png)

# 今までの経過

+ 	お部屋魔改造か... → とりあえずリモコンからやるか
	→リモコンの信号解析 (技術書典6 #kosen16s本を呼んでね！)
+	.....

	## ↑ 今ここ
    
-------------------------
![bg](Signal_Recorder.png)

# 今までの経過

+ 	お部屋魔改造か... → とりあえずリモコンからやるか
	→リモコンの信号解析 (技術書典6 #kosen16s本を読んでね！)
+	.....

<span style="font-size: 50px">
  <div style="font-weight: 900;">
　  ↑ 今ここ 
  </div>
</span>

-------------------------
![bg](Signal_Recorder.png)

<span style="font-size: 100px;">
  いや，<br>
  なんもしとらんや～～～～～～～～～～～～～～～ん
</span>

-------------------------
![bg](Signal_Recorder.png)

# やりましょう！

と思った矢先のこと...
## 「あ，解析用デバイスの使い方忘れた」

-------------------------
![bg](Signal_Recorder.png)

# 他にもやることはある！

これまで何も調べずに，
ただ魔改造したいと思ってリモコンの信号を
取得・解析してきましたが，

### 通信フォーマットとか考えたことなくね！？
## →調べましょう！

-------------------------
![bg](Signal_Recorder.png)

# というかまず通信フォーマットって何？

-------------------------
![bg](Signal_Recorder.png)

# 赤外線リモコンの通信フォーマット

このキーワードでgoogle先生に調べ物を頼むと

+ 	赤外線リモコンの通信フォーマット - ELM by ChaN
	http://elm-chan.org/docs/ir_format.html
+	赤外線リモコンのフォーマット
	http://www.asahi-net.or.jp/~gt3n-tnk/IR_TX1.html
+	エアコンのリモコン信号を解析する ~デコード編~ - Qiita
	https://qiita.com/gorohash/items/598d69a63bd6b4308291

と言った記事を教えてくれます．
しっかりした解説を読みたいという方はこちらの記事を読んでください．

-------------------------
![bg](Signal_Recorder.png)

<span style="font-size: 500px;">
  <div style="text-align:center">
  	で
   </div>
</span>

-------------------------
![bg](Signal_Recorder.png)

## ざっくり説明すると，

+ 	**赤外線リモコンの通信フォーマットは**(大きく)**3種類**
	（海外規格も普及しつつあるので要注意）
+ 	リモコンで使用する赤外線の波長は**950[nm]**
+ 	一回の信号あたりの信号が出力されている時間は**108[ms]**
+ 	とりあえず**リーダー**とよばれる信号を取れれば**規格がわかりそう**

-------------------------
![bg](Signal_Recorder.png)

## 自分がとったデータでリーダーを確認してみる

-------------------------
![bg](Signal_Recorder.png)

![data 70% center](images/信号.png)

-------------------------
![bg](Signal_Recorder.png)

<span style="font-size: 500px;">
  <div style="text-align:center">
  	...?
   </div>
</span>

-------------------------
![bg](Signal_Recorder.png)

![datareberse 70% center](images/信号反転.png)


-------------------------
![bg](Signal_Recorder.png)

![1T 80% center](images/1T.png)

-------------------------
![bg](Signal_Recorder.png)

![3T 60% center](images/3T.png)

ちょっとこのデータと合う通信規格が見つからない....
# →もしかしてデータちゃんと取れてないんじゃない？


-------------------------
![bg](Signal_Recorder.png)

# 反省

+	データがいつ取れたものなのかが全くわからない
	(信号が出力されてから何[ms]経っているのかがわからない)
+   Arduino の digitalRead() 関数は処理にかかる時間が長い
	(知ってたけどとりあえずで作ってそのまま放置していた)
    
-------------------------
![bg](Signal_Recorder.png)

# 信号なんて簡単に取れるだろ とタカをくくっていた

-------------------------
![bg](Signal_Recorder.png)

# まとめ

自分が作ったデバイスでは信号を取り切れていませんでした......
とりあえず，赤外線リモコンの通信フォーマットについて知ることはできました．

次回，デバイス改良編でお会いしましょう．
