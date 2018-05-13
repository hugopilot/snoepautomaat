/* Code written by Hugo Woesthuis and Rogier Boertje
 *  All Rights Reserved
 */

#include "Movements.h" 
#include "Product.h"
#include <Arduino.h>

// value for the servo when opened
int servoOpenValue;

// value for the servo when closed
int servoClosedValue;

class Movements
    { 
      void ReleaseProduct(Product product){
        Position p = product.pos;
        Servo pS = p.PortServo;
        Servo hS = p.HoldServo;
  
        // Zeker zijn dat de hold servo omhoog is
        hS.write(servoClosedValue);   

        // Release het product   
        pS.write(servoOpenValue);

        // 3 seconden delay
        delay(3000);

        // Sluit poort
        pS.write(servoClosedValue);
      }
      
      void RenewProduct(Product product){
        Position p = product.pos;
        Servo pS = p.PortServo;
        Servo hS = p.HoldServo;

        // Zorg ervoor dat de port servo omhoog is 
        pS.write(servoClosedValue);

        // Laat een nieuw product komen
        hS.write(servoOpenValue);

        // Wacht 5 seconden
        delay(5000);  

        // Sluit holding servo 
        hS.write(servoClosedValue);
      }
    };
