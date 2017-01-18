/*
  Reading a serial ASCII-encoded string.

 This sketch demonstrates the Serial parseInt() function.
 It looks for an ASCII string of comma-separated values.
 It parses them into ints, and uses those to fade an RGB LED.

 Circuit: Common-anode RGB LED wired like so:
 * Red cathode: digital pin 3
 * Green cathode: digital pin 5
 * blue cathode: digital pin 6
 * anode: +5V

 created 13 Apr 2012
 by Tom Igoe

 This example code is in the public domain.
 */
#include <SoftwareSerial.h> // More information at https://www.arduino.cc/en/Reference/SoftwareSerial
SoftwareSerial mySerial(10, 11); // Pin 10 will work as RX and Pin 11 as TX

void setup() {
  // initialize serial:
  Serial.begin(19200);
     mySerial.begin(9600);

delay(10000);
}

void loop() {
  // if there's any serial available, read it:
  Serial.print("CCAA");
  mySerial.println("sent");
  String buf = "";
  delay(6000);
  while (Serial.available() > 0) {

    char xx= Serial.read();
    buf = buf + xx;
    
  }
  mySerial.println(buf);
  delay(20000);
}








