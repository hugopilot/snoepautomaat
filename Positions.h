/* Code written by Hugo Woesthuis and Rogier Boertje
 *  All Rights Reserved
 */


#ifndef POSITIONS_H
#define POSITIONS_H
#include <Servo.h>
struct Position{
   // Geeft nummer aan
   int Index;

   // Deze servo houdt de product tegen
   Servo PortServo;

   // Deze servo houd het product omhoog
   Servo HoldServo;
};
#endif
