/* Code written by Hugo Woesthuis and Rogier Boertje
 *  All Rights Reserved
 */


#ifndef PRODUCT_H
#define PRODUCT_H
#include "Positions.hpp"
  // struct for a product
  struct Product{
    Position pos;
    float Price;
	  char Name [];
  };
#endif
