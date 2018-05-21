/* Code written by Hugo Woesthuis and Rogier Boertje
 *  All Rights Reserved
 */

#include "Movements.hpp" 
#include "Product.hpp"
#include <Arduino.h>

class Movements
    { 
      public:
      static void ReleaseProduct(Product product, int ClosedValue, int OpenValue){
        Servo pS = product.PortServo;
        Servo hS = product.HoldServo;
  
        // Zeker zijn dat de hold servo omhoog is
        hS.write(ClosedValue);   

        // Release het product   
        pS.write(OpenValue);

        // 3 seconden delay
        delay(3000);

        // Sluit poort
        pS.write(ClosedValue);
      }
      
      static void RenewProduct(Product product, int ClosedValue, int OpenValue){
        Servo pS = product.PortServo;
        Servo hS = product.HoldServo;

        // Zorg ervoor dat de port servo omhoog is 
        pS.write(ClosedValue);

        // Delay zodat servo tijd heeft om omhoog te gaan
        delay(300);  
        
        // Laat een nieuw product komen
        hS.write(OpenValue);

        // Wacht 3 seconden
        delay(2500);  

        // Sluit holding servo 
        hS.write(ClosedValue);
      }

      static void ClosePorts(Servo port, int ClosedValue){
       
          port.write(ClosedValue);
      }
    };
