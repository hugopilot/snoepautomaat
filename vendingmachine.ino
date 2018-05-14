/* Code written by Hugo Woesthuis and Rogier Boertje
 *  All Rights Reserved
 */

#include "Product.hpp"
#include "Movements.hpp"
#include "ServoHandler.cpp"
#include <Servo.h>
Servo sv1;
Servo sv2;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  // Meer setup

  Serial.println("Setup Completed!");
  Serial.println("Vending machine started with success");
}

void loop() {
  // put your main code here, to run repeatedly:
  
}
