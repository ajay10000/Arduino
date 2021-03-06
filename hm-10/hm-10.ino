/*
 * HM 10 Serial Test
 * http://satujamsaja.blogspot.co.id
 */

#include <SoftwareSerial.h>

SoftwareSerial mySerial(7, 8);  // RX,TX

/*
 * HM-10 RXD pin -> Arduino Pin 8 (TX)
 * HM-10 TXD pin -> Arduino Pin 7 (RX) 
 */

void setup()
{  
  Serial.begin(9600);
  mySerial.begin(9600);
}

void loop()
{  
  char c;
  if (Serial.available())
  {
    c = Serial.read();
    mySerial.print(c);
  }
  
  if (mySerial.available())
  {
    c = mySerial.read();
    Serial.print(c);  
  }
}
