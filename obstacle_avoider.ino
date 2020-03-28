/******************* Obstacle Avoider *******************/
/* Title: Obstacle Avoider 
 * Author: Laya Mathikshara
 * Date of creation: 17.03.2019
 * MCU: Arduino Uno
 * Sensors: IR sensor
 * Actuator: Motor(2)
 * Pinout: 
 *        Motor 1 - 2,3
 *        Motor 2 - 5,6
 *        IR sensor - A0
 */
void setup() 
{
     //IR sensor
   pinMode(A0,INPUT);
   
       //motor
       
   //1    
   pinMode(2,OUTPUT);
   pinMode(3,OUTPUT);
 
   //2
   pinMode(6,OUTPUT);
   pinMode(5,OUTPUT);
     
  }

void loop() 
{
 int v=digitalRead(A0);
if(v==LOW)                                          
{
     //Motor 1
 digitalWrite(2,HIGH);
 digitalWrite(3,LOW);
 
     //Motor 2
 digitalWrite(5,HIGH);
 digitalWrite(6,LOW);
 
 delay(1000); 
}

else
{
     //Motor 1
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 
     //Motor 2
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
 
 delay(1000);
}
}


