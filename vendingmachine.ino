/* Code written by Hugo Woesthuis and Rogier Boertje
 *  All Rights Reserved
 */

#include "Product.hpp"
#include "Movements.cpp"
#include "ServoHandler.cpp"
#include "Vector.h"

Vector<Product> pp;
int a;
int b;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(57600);
  // Meer setup
  pp.push_back({GenerateServoClass(9), GenerateServoClass(10), 1.00, 512});
  pp.push_back({GenerateServoClass(11), GenerateServoClass(12), 1.20, 512});
  for(int i = 0; i < pp.size(); i++){
    Movements::ClosePorts(pp[i].PortServo);
    Movements::ClosePorts(pp[i].HoldServo);
  }
  Serial.println("Setup Completed!");
  Serial.println("Vending machine started with success");  
  Serial.println(); 
}

void loop() {
  // put your main code here, to run repeatedly:
  
  a = analogRead(A0);
  b = analogRead(A1);
  if(a > 255){
    if(pp[0].CurrentQuantity <= 0){
      Serial.println("Product is niet beschrikbaar");
      }
    else{
      pp[0].CurrentQuantity --;
      Movements::ReleaseProduct(pp[0]);
      Movements::RenewProduct(pp[0]);
      Serial.print("OK: ");
      Serial.print(pp[0].CurrentQuantity);
      Serial.println(" left.");
      }
    }
    else if(b > 255){
      if(pp[1].CurrentQuantity <= 0){
        Serial.println("Product is niet beschrikbaar");
      }
      else{
        pp[1].CurrentQuantity --;
        Movements::ReleaseProduct(pp[1]);
        Movements::RenewProduct(pp[1]);
        Serial.print("OK: ");
        Serial.print(pp[1].CurrentQuantity);
        Serial.println(" left.");
      }
    }
  }
