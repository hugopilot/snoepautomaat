/* Code written by Hugo Woesthuis and Rogier Boertje
 *  All Rights Reserved
 */


#ifndef PRODUCT_H
#define PRODUCT_H
#include "Positions.h"
  // struct for a product
  struct Product{
    Position pos;
    double Price;
	  char Name [];
  };
#endif
