/* Code written by Hugo Woesthuis and Rogier Boertje
 *  All Rights Reserved
 */


#ifndef PRODUCT_H
#define PRODUCT_H
#include <Servo.h>
  // struct for a product
  struct Product{
    // Deze servo houdt de product tegen
    Servo PortServo;

    // Deze servo houd het product omhoog
    Servo HoldServo;

    // Prijs van product
    float Price;

    // Huidige hoeveelheid
    int CurrentQuantity;
  };
#endif
