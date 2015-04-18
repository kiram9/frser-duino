#include <SPI.h>
#include "uart.h"
#include "spi.h"
#include "frser.h"
#include "typeu.h"
const int ledPin = 13;
const int wpPin = 9;

void setup(){
  Serial.begin(115200); 
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, HIGH);   // set the LED on
  pinMode(wpPin, OUTPUT);
  digitalWrite(wpPin, HIGH);   // set wp off
  
}


void loop(){
  frser_main();
  
}
