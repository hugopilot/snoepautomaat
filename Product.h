#ifndef PRODUCT_H
#define PRODUCT_H
public:
  // struct for a product
  struct Product{
    int position;
    double price;
	char[] name;
  }
  Product[] GetAllProducts();
#endif
