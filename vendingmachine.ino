/* Code written by Hugo Woesthuis and Rogier Boertje
 *  All Rights Reserved
 */

#include "Product.hpp"
#include "Movements.cpp"
#include "ServoHandler.cpp"

Product pp;
int a;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  // Meer setup
  pp = {GenerateServoClass(9), GenerateServoClass(10), 1.00, 512};
  Servo p[] {pp.PortServo, pp.HoldServo};
  Movements::ClosePorts(p);
  Serial.println("Setup Completed!");
  Serial.println("Vending machine started with success");  
}

void loop() {
  // put your main code here, to run repeatedly:
  a = analogRead(0);
  if(a > 255){
    if(pp.CurrentQuantity <= 0){
      Serial.println("Product is niet beschrikbaar");
      }
    else{
      pp.CurrentQuantity --;
      Movements::ReleaseProduct(pp);
      Movements::RenewProduct(pp);
      Serial.println("Product left = " + pp.CurrentQuantity);
      }
    }
  }
