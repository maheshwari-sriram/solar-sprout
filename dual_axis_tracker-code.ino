#include <Servo.h>
Servo myservo;  // create servo object to control a servo
Servo myservo1;  // create servo object to control a servo
// twelve servo objects can be created on most boards


int ldr1 = 8;
int ldr2 = 9;

int ldr3 = 10;
int ldr4 = 11;


int pos = 0;    // variable to store the servo position


void setup() 
{
  myservo.attach(A0);  // attaches the servo on pin 9 to the servo object
  myservo1.attach(A1);
  
  pinMode(ldr1, INPUT);
  pinMode(ldr2, INPUT);
  
  pinMode(ldr3, INPUT);
  pinMode(ldr4, INPUT);
  
  myservo.write(90);
}

int x_axis=90;
int y_axis=90;
void loop() 
{
  if(digitalRead(ldr1) == LOW && digitalRead(ldr2) == HIGH)
    {
     x_axis++; 
     if(x_axis >= 160)
       {
         x_axis=160;
       } 
       
      myservo.write(x_axis);  
    }
  if(digitalRead(ldr1) == HIGH && digitalRead(ldr2) == LOW)
    {
     x_axis--;
     if(x_axis <= 20)
       {
         x_axis=20;
       }  

      myservo.write(x_axis);    
    }  


 if(digitalRead(ldr3) == LOW && digitalRead(ldr4) == HIGH)
    {
     y_axis++; 
     if(y_axis >= 180)
       {
         y_axis=180;
       } 
       
      myservo1.write(y_axis);  
    }
  if(digitalRead(ldr3) == HIGH && digitalRead(ldr4) == LOW)
    {
     y_axis--;
     if(y_axis <= 0)
       {
         y_axis=0;
       }  

      myservo1.write(y_axis);    
    }  

  delay(80);
 }
