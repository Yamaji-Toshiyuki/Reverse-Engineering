void cdown(int times);
int i,t;

void setup() {
  // put your setup code here, to run once:
  t = millis();
  digitalWrite(13,HIGH);
  Serial.begin(9600);
  pinMode(2,INPUT);
  pinMode(4,INPUT);
  pinMode(13,OUTPUT);
  while(millis() < t+1000){}
  digitalWrite(13,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(digitalRead(2)){
    cdown(3);
    t = millis();
    digitalWrite(13,HIGH);
    while(millis() < t + 1000){
      Serial.print(PIND & _BV(4));
      Serial.print(",");
      Serial.println(analogRead(0));
    }
  Serial.flush();
  digitalWrite(13,LOW);
  pinMode(12,OUTPUT);
  }
}

void cdown(int times){
  for(i = 0;i < times;i++){
    t = millis();
    digitalWrite(13,HIGH);
    //Serial.println("HIGH");
    while(millis() < t+100){}
    digitalWrite(13,LOW);
    //Serial.println("LOW");
    while(millis() < t+500){}
  }
}
