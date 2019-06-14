#define AIN1 13
#define AIN2 12
#define PWMA 11
//#define BIN1 10
//#define BIN2 9
//#define PWMB 8

void setup() {
  pinMode(AIN1,OUTPUT);
  pinMode(AIN2,OUTPUT);
  pinMode(PWMA,OUTPUT);
  //pinMode(BIN1,OUTPUT);
  //pinMode(BIN2,OUTPUT);
  //pinMode(PWMB,OUTPUT);
  
}

void loop() {
  int i=0;
  //モーター停止
  digitalWrite(AIN1,LOW);
  digitalWrite(AIN2,LOW);
  delay(500);

  //モーター正回転・スピード変化
  digitalWrite(AIN1,HIGH);
  digitalWrite(AIN2,LOW);
  for(i=0;i<256;i++){
    analogWrite(PWMA,i);
    delay(0);
  }
  for(i=255;i>=0;i--){
    analogWrite(PWMA,i);
    delay(100);  
  }

  //モーター停止
  digitalWrite(AIN1,LOW);
  digitalWrite(AIN2,LOW);
  delay(500);

  //モーター逆回転・スピード変化
  digitalWrite(AIN1,LOW);
  digitalWrite(AIN2,HIGH);
  for(i=0;i<256;i++){
    analogWrite(PWMA,i);
    delay(100);
  }
  for(i=255;i>=0;i--){
    analogWrite(PWMA,i);
    delay(100);  
  }

}
