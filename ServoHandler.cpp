/* Code written by Hugo Woesthuis and Rogier Boertje
 *  All Rights Reserved
 */
#ifndef SERVOHANDLER_CPP
#define SERVOHANDLER_CPP
#include "ServoHandler.h"
  Servo GenerateServoClass(int ControlPort){
    Servo sv;
    sv.attach(ControlPort);
    return sv;
  }
#endif
 

