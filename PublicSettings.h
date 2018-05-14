#pragma once
#ifndef PUBLICSETTINGS_H
#define PUBLICSETTINGS_H
#include "Product.hpp"
#include "Positions.hpp"
class PublicSettings{
  public:
  Product GetProduct(int ID);
  int GetNumberOfProducts();
  private:
  const int NumberOfProducts;
  Product products[];
  Position pos[];
};

#endif
