/* Code written by Hugo Woesthuis and Rogier Boertje
 *  All Rights Reserved
 */

#include "Product.hpp"
#include "Movements.cpp"
#include "ServoHandler.cpp"
#include "ServoPositions.c"
#include "integers.c"
#include "Vector.h"

Vector<Product> pp;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(57600);
  
  // Init producten, voor nu hardcoded
  pp.push_back({GenerateServoClass(SBaan1_1), GenerateServoClass(SBaan1_2), 1.00, 3});
  pp.push_back({GenerateServoClass(SBaan2_1), GenerateServoClass(SBaan2_2), 1.20, 512});
  pp.push_back({GenerateServoClass(SBaan3_1), GenerateServoClass(SBaan3_2), 1.10, 512});

  // Sluit alle poorten
  for(int i = 0; i < pp.size(); i++){
    Movements::ClosePorts(pp[i].PortServo, OnePortCL);
    Movements::ClosePorts(pp[i].HoldServo, OnePortCL);
  }

  // Button pinModes set
  pinMode(Button1_PIN, INPUT_PULLUP);
  pinMode(Button2_PIN, INPUT_PULLUP);
  pinMode(Button3_PIN, INPUT_PULLUP);

  // Print succes bericht
  Serial.println("Setup Completed!");
  Serial.println("Vending machine started with success");  
  Serial.println(); 
}

void loop() {
  // put your main code here, to run repeatedly:

  // Verkrijg digitale waarden
  int b1State = digitalRead(Button1_PIN);
  int b2State = digitalRead(Button2_PIN);
  int b3State = digitalRead(Button3_PIN);
  
  if(b1State == HIGH){
    if(pp[0].CurrentQuantity < 1){
      // Niks doen
    }
    else if(pp[0].CurrentQuantity == 1){
      Movements::Release(pp[0], 90, 10);
    }
    else{
      Movements::ReleaseAndRenew(pp[0], 90, 10);
    }
      
  }
  else if(b2State == HIGH){
    if(pp[1].CurrentQuantity < 1){
      // Niks doen
    }
    else if(pp[1].CurrentQuantity <= 1){
      Movements::Release(pp[1], 90, 10);
    }
    else{
      Movements::ReleaseAndRenew(pp[1], 90, 10);
    }}
    else if(b3State == HIGH){
     if(pp[2].CurrentQuantity < 1){
      // Niks doen
    }
    else if(pp[2].CurrentQuantity <= 1){
      Movements::Release(pp[2], 90, 10);
    }
    else{
      Movements::ReleaseAndRenew(pp[2], 90, 10);
    }
  }
}
