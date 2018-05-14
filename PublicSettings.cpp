#ifndef PUBLICSETTINGS_CPP
#define PUBLICSETTINGS_CPP
#include "PublicSettings.h"

// Initalization
const int NumberOfProducts = 4;
Product products[NumberOfProducts];
Position pos[NumberOfProducts];


Product GetProduct(int ID){
  return products[ID];
}

int GetNumberOfProducts(){
  return NumberOfProducts;
}
#endif
