/* Code written by Hugo Woesthuis and Rogier Boertje
 *  All Rights Reserved
 */

#include "Movements.hpp" 
#include "Product.hpp"
#include "integers.c"
#include <Arduino.h>

class Movements
    { 
      public:
      static void ReleaseProduct(Product product){
        Servo pS = product.PortServo;
        Servo hS = product.HoldServo;
  
        // Zeker zijn dat de hold servo omhoog is
        hS.write(GeneralServoClosedValue);   

        // Release het product   
        pS.write(GeneralServoOpenValue);

        // 3 seconden delay
        delay(3000);

        // Sluit poort
        pS.write(GeneralServoClosedValue);
      }
      
      static void RenewProduct(Product product){
        Servo pS = product.PortServo;
        Servo hS = product.HoldServo;

        // Zorg ervoor dat de port servo omhoog is 
        pS.write(GeneralServoClosedValue);

        // Delay zodat servo tijd heeft om omhoog te gaan
        delay(300);  
        
        // Laat een nieuw product komen
        hS.write(GeneralServoOpenValue);

        // Wacht 3 seconden
        delay(2500);  

        // Sluit holding servo 
        hS.write(GeneralServoClosedValue);
      }

      static void ClosePorts(Servo port){
       
          port.write(GeneralServoClosedValue);
      }
    };
