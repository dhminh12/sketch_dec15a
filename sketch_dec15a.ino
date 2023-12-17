#include <VarSpeedServo.h> 

VarSpeedServo servo1,servo2,servo3,servo4;
int a = 700;
int b=80;
int c=0;
void setup() { 
  Serial.begin(9600);
  //servo1.attach(3);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(11, OUTPUT);
    

  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);
  servo1.attach(9);
  servo2.attach(8);
  servo3.attach(10);
  servo4.attach(12);

  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo3.write(90);
  
}

void loop() {
  //Serial.println(analogRead(A2));
if(analogRead(A0)>a && analogRead(A1)> a && analogRead(A2)<a && analogRead(A3)>a&&analogRead(A4)>a){
  analogWrite(3,b);
  analogWrite(11,b);
  thang();
  Serial.println("thang");
}
else if(analogRead(A0)>a && analogRead(A1)> a && analogRead(A2)<a && analogRead(A3)<a&&analogRead(A4)>a){
  analogWrite(3,b);
  analogWrite(11,b);
  phai();
  Serial.println("phai");
}
else if(analogRead(A0)>a && analogRead(A1)> a && analogRead(A2)<a && analogRead(A3)<a&&analogRead(A4)<a){
  analogWrite(3,b);
  analogWrite(11,b);
  phai();
  Serial.println("phai1");
}
else if(analogRead(A0)>a && analogRead(A1)> a && analogRead(A2)>a && analogRead(A3)<a&&analogRead(A4)<a){
  analogWrite(3,b);
  analogWrite(11,b);
  phai();
  Serial.println("phai2");
}
else if(analogRead(A0)>a && analogRead(A1)>a && analogRead(A2)>a && analogRead(A3)<a&&analogRead(A4)>a){
  analogWrite(3,b);
  analogWrite(11,b);
  phai();
  Serial.println("phai3");
}
else if(analogRead(A0)>a && analogRead(A1)>a && analogRead(A2)>a && analogRead(A3)>a&&analogRead(A4)<a){
  analogWrite(3,b);
  analogWrite(11,b);
  phai();
  Serial.println("phai4");
}
else if(analogRead(A0)>a && analogRead(A1)< a && analogRead(A2)<a && analogRead(A3)>a&&analogRead(A4)>a){
  analogWrite(3,b);
  analogWrite(11,b);
  trai();
  Serial.println("trai");
}
else if(analogRead(A0)<a && analogRead(A1)< a && analogRead(A2)<a && analogRead(A3)>a&&analogRead(A4)>a){
  analogWrite(3,b);
  analogWrite(11,b);
  trai();
  Serial.println("trai1");
}
else if(analogRead(A0)<a && analogRead(A1)< a && analogRead(A2)>a && analogRead(A3)>a&&analogRead(A4)>a){
  analogWrite(3,b);
  analogWrite(11,b);
  trai();
  Serial.println("trai2");
}
else if(analogRead(A0)>a && analogRead(A1)< a && analogRead(A2)>a && analogRead(A3)>a&&analogRead(A4)>a){
  analogWrite(3,b);
  analogWrite(11,b);
  trai();
  Serial.println("trai3");
}
else if(analogRead(A0)< a && analogRead(A1)> a && analogRead(A2)>a && analogRead(A3)>a&&analogRead(A4)>a){
  analogWrite(3,b);
  analogWrite(11,b);
  trai();
  Serial.println("trai4");
}
else if(analogRead(A0)<a && analogRead(A1)< a && analogRead(A2)<a && analogRead(A3)<a&&analogRead(A4)<a){
  dung();
  delay(3000);
  Serial.println("dung");
  if(c==0){
    servo1.write(180);
    servo2.write(0);
    servo3.write(180);
    servo4.write(0);
    delay(250);
    //delay(500);
    c=1;
  }
  else if(c==1){
    servo1.write(90);
    servo2.write(90);
    servo3.write(90);
    servo4.write(90);
    delay(250);
    //delay(500);
    c=0;
  }
    analogWrite(3,140);
    analogWrite(11,140);
    thang();
    delay(10);
 
}
else{
  dung();
}
delay(50);
}
void thang(){
  digitalWrite(4,0);
  digitalWrite(5,1);
  digitalWrite(6,1);
  digitalWrite(7,0);
}
void trai(){
  digitalWrite(4,1);
  digitalWrite(5,0);
  digitalWrite(6,1);
  digitalWrite(7,0);
}
void phai(){
  digitalWrite(4,0);
  digitalWrite(5,1);
  digitalWrite(6,0);
  digitalWrite(7,1);
}

void dung(){
  digitalWrite(4,0);
  digitalWrite(5,0);
  digitalWrite(6,0);
  digitalWrite(7,0);
}
