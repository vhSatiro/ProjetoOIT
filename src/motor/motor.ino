#include <Servo.h>

Servo myservo;  

int pos = 0;
int weight = 433;

void setup() {
  myservo.attach(9);
  Serial.begin(9600);
}

void loop() {
  char caracter;
  if(Serial.available()){
    caracter = Serial.read();
    if(caracter == 'g'){
      openDoor();
      closeDoor();
    } else if(caracter == 'h'){
      Serial.println(444);
    }  
  }
  
}

void closeDoor(){
  for (pos = 0; pos <= 90; pos += 1) { 
    myservo.write(pos);              
    delay(15);                       
  }
}

void openDoor(){
  for (pos = 90; pos >= 0; pos -= 1) { 
    myservo.write(pos);              
    delay(15);                       
  }
}
