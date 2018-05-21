/* Code written by Hugo Woesthuis and Rogier Boertje
 *  All Rights Reserved
 */

#include "Product.hpp"
#include "Movements.cpp"
#include "ServoHandler.cpp"
#include "ServoPositions.c"
#include "Vector.h"

Vector<Product> pp;
int a;
int b;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  // Meer setup
  pp.push_back({GenerateServoClass(3), GenerateServoClass(5), 1.00, 3});
  pp.push_back({GenerateServoClass(11), GenerateServoClass(12), 1.20, 512});
  for(int i = 0; i < pp.size(); i++){
    Movements::ClosePorts(pp[i].PortServo, OnePortCL);
    Movements::ClosePorts(pp[i].HoldServo, OnePortCL);
  }
  Serial.println("Setup Completed!");
  Serial.println("Vending machine started with success");  
  Serial.println(); 
}

void loop() {
  // put your main code here, to run repeatedly:

  // Get analoge waarden
  char c = Serial.read();
  if(Serial.available() > 0){
    if(c = 's'){
    if(pp[0].CurrentQuantity <= 0){
      Serial.println("Product is niet beschrikbaar");
      }
    else{
      pp[0].CurrentQuantity --;
      Movements::ReleaseProduct(pp[0], OnePortCL, OnePortOV);
      Movements::RenewProduct(pp[0], OnePortCL, OnePortOV);
      Serial.print("OK 1: ");
      Serial.print(pp[0].CurrentQuantity);
      Serial.println(" left.");
      }
    }
    else if(c = 'a'){
      if(pp[1].CurrentQuantity <= 0){
        Serial.println("Product is niet beschrikbaar");
      }
      else{
        pp[1].CurrentQuantity --;
        Movements::ReleaseProduct(pp[1], OnePortCL, OnePortOV);
        Movements::RenewProduct(pp[1], OnePortCL, OnePortOV);
        Serial.print("OK 2: ");
        Serial.print(pp[1].CurrentQuantity);
        Serial.println(" left.");
      }
    }
  }
  // Stel een delay in om plotselinge release te voorkomen
  //delay(5);
  
  
  }
