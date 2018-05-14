/* Code written by Hugo Woesthuis and Rogier Boertje
 *  All Rights Reserved
 */
#pragma once
 #ifndef SERVOHANDLER_H
 #define SERVOHANDLER_H
 #include <Servo.h>
 class ServoHandler{
  public:
  static Servo GenerateServoClass(int ControlPort);
 };
#endif
