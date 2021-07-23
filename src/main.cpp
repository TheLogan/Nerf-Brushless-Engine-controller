#include <Arduino.h>
#include <Servo.h>

/*
  Arduino Brushless Motor Control
  by Dejan, https://howtomechatronics.com
*/
Servo ESC;    // create servo object to control the ESC
int potValue; // value from the analog pin
void setup()
{
  Serial.begin(9600);
  // Attach the ESC on pin 9
  ESC.attach(9, 1000, 2000); // (pin, min pulse width, max pulse width in microseconds)
  Serial.println("ESC attached");
  delay(5000);
  ESC.write(2000);
  delay(2000);
  ESC.write(1000);
  delay(2000);
  
  // Serial.println("Attach Battery now");
  // ESC.write(1000);
}
void loop()
{
  delay(3000);
  ESC.write(1000);
  Serial.println("ESC set to min");
  delay(3000);
  ESC.write(2000);
  Serial.println("ESC set to max");
  delay(3000);
  ESC.write(1500);
  Serial.println("ESC set to mid");

  // potValue = analogRead(A0);                 // reads the value of the potentiometer (value between 0 and 1023)
  // potValue = map(potValue, 0, 1023, 0, 180); // scale it to use it with the servo library (value between 0 and 180)
  // ESC.write(potValue);                       // Send the signal to the ESC
}