#include<Servo.h>

Servo servo;
int angle=0;


long duration;
long distance;


void setup()
{
  pinMode(13, OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(12,INPUT);
  Serial.begin(9600);
  servo.attach(11);
}

void loop()
{
  
  digitalWrite(13,LOW);
  delay(5);
  digitalWrite(13,LOW);
  delayMicroseconds(10);
  digitalWrite(13,LOW);
        duration=pulseIn(12,HIGH);
        distance=(duration*.034)/2;
        if(distance<=20){
          servo.write(90);
          delay(2000);
          digitalWrite(10,HIGH);
          delay(1000);
          digitalWrite(10,LOW);
           servo.write(-90);
        }
  Serial.print(duration);
  
          
        
}