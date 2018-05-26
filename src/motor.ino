#include <Servo.h>

Servo myservo;  

int pos = 0;
//int weight = 433;

void setup() {
  myservo.attach(9);
  Serial.begin(9600);
}

void loop() {
  char caracter;
  if(Serial.available()){
    caracter = Serial.read();
    Serial.println(weight);
    if(caracter == 'g'){
      openDoor();
      closeDoor();
    }  
  }
}

void openDoor(){
  for (pos = 0; pos <= 90; pos += 1) { 
    myservo.write(pos);              
    delay(15);                       
  }
}

void closeDoor(){
  for (pos = 90; pos >= 0; pos -= 1) { 
    myservo.write(pos);              
    delay(15);                       
  }
}
