/*
DC Voltmeter
An Arduino Divided Voltage Meter (Max Voltage = 20V)
James Tan
*/

float vOutput;
float vInput;
float R1 = 10000.000;
float R2 = 30000.000;
int vValue = 0;
#include <Arduino.h>

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop()
{
  // put your main code here, to run repeatedly:
  int AnaInput = 0;
  vValue = analogRead(AnaInput);
  vOutput = (vValue * 5.0) / 1024.0;
  vInput = vOutput / (R1 / (R1 + R2));
  Serial.println(vInput);
  delay(500);
}
