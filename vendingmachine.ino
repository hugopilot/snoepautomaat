/* Code written by Hugo Woesthuis and Rogier Boertje
 *  All Rights Reserved
 */

#include "Product.hpp"
#include "Movements.hpp"
#include "ServoHandler.cpp"
#include "PublicSettings.cpp"
#include <Servo.h>


Servo sv1;
Servo sv2;
int maintState = 0;
const int buttonpin = 4;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  // Meer setup

  Serial.println("Setup Completed!");
  Serial.println("Vending machine started with success");
  pinMode(buttonpin, INPUT_PULLUP);  
}

void loop() {
  // put your main code here, to run repeatedly:

  if(Serial.available() > 0){
    char dataIn = Serial.read();
  }
}
