/*
 Fading
 
 This example shows how to fade an LED using the analogWrite() function.
 
 The circuit:
 * LED attached from digital pin 9 to ground.
 
 Created 1 Nov 2008
 By David A. Mellis
 modified 30 Aug 2011
 By Tom Igoe
 
 http://arduino.cc/en/Tutorial/Fading
 
 This example code is in the public domain.
 
 */

int led = 13;
int ledPin = 9;    // LED connected to digital pin 9

void setup()  { 
  // nothing happens in setup 
} 

void loop()  { 
  // fade in from min to max in increments of 5 points:
  for(int fadeValue = 64 ; fadeValue <= 255; fadeValue +=64) { 
    // sets the value (range from 0 to 255):
    digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
    analogWrite(ledPin, fadeValue);           
    delay(200);    
    digitalWrite(led, LOW);    
    analogWrite(ledPin, 0);           
    delay(400);                            
  } 
}


