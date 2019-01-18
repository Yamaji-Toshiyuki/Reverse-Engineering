#define data_num 500

void cdown(unsigned int times);
void send_data(boolean, int);
unsigned int i,t;
boolean digital_data[data_num] = {0};
int analog_data[data_num] = {0};

void setup() {
  // put your setup code here, to run once:
  t = millis();
  digitalWrite(13,HIGH);
  Serial.begin(9600);
  pinMode(2,INPUT);
  pinMode(4,INPUT);
  pinMode(13,OUTPUT);
  Serial.println("standingby...");
  while(millis() < t+1000){}
  digitalWrite(13,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(digitalRead(2)){
    cdown(3);
    t = millis();
    digitalWrite(13,HIGH);
    i=0;
    while(millis() < t + 1000){
      digital_data[i] = digitalRead(2);  //PIND & _BV(PD2);
      analog_data[i] = analogRead(0);
      i++;
    }
    digitalWrite(13,LOW);
    for(i = 0; i < data_num; i++){
      send_data(digital_data[i], analog_data[i]);
    }
    Serial.flush();
    pinMode(12,OUTPUT);
  }
}

void cdown(unsigned int times){
  for(i = 0;i < times;i++){
    t = millis();
    digitalWrite(13,HIGH);
    Serial.println(3-i);
    while(millis() < t+100){}
    digitalWrite(13,LOW);
    //Serial.println("LOW");
    while(millis() < t+500){}
  }
}

void send_data(boolean d_data, int a_data){
  Serial.print(d_data);
  delay(10);
  Serial.print(",");
  delay(10);
  Serial.println(a_data);
  delay(10);
}
