/* Code written by Hugo Woesthuis and Rogier Boertje
 *  All Rights Reserved
 */

#include "Movements.hpp" 
#include "Product.hpp"
#include <Arduino.h>

// value for the servo when opened
const int servoOpenValue1 = 80;
const int servoOpenValue2 = 0;
// value for the servo when closed
const int servoClosedValue1 = 180;
const int servoClosedValue2 = 90;

class Movements
    { 
      public:
      static void ReleaseProduct(Product product){
        Servo pS = product.PortServo;
        Servo hS = product.HoldServo;
  
        // Zeker zijn dat de hold servo omhoog is
        hS.write(servoClosedValue2);   

        // Release het product   
        pS.write(servoOpenValue2);

        // 3 seconden delay
        delay(3000);

        // Sluit poort
        pS.write(servoClosedValue2);
      }
      
      static void RenewProduct(Product product){
        Servo pS = product.PortServo;
        Servo hS = product.HoldServo;

        // Zorg ervoor dat de port servo omhoog is 
        pS.write(servoClosedValue2);

        // Delay zodat servo tijd heeft om omhoog te gaan
        delay(300);  
        
        // Laat een nieuw product komen
        hS.write(servoOpenValue2);

        // Wacht 3 seconden
        delay(2500);  

        // Sluit holding servo 
        hS.write(servoClosedValue2);
      }

      static void ClosePorts(Servo port){
       
          port.write(servoClosedValue2);
      }
    };
