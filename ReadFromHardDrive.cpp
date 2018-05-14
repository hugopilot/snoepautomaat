#include "EepromController.cpp"
#include "Product.hpp"

Product GetProduct(int Index){
  for(int i = 0; i < 512; i++){
    if(i == 0 | i == 8 | i == 16 | i == 24 | i == 32 | i == 40 | i == 56 | i == 64 | i == 72 | i == 80 | i == 88 | i == 92 ){
        int number = getInt(i);
    }
    else{
      continue;
    }
  }
}

