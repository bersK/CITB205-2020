#ifndef LAB1_PRODUCT_H
#define LAB1_PRODUCT_H

#include <string>

using std::string;

class Product {
public:
    Product(string name, double price) : name(name), price(price) {};
    string name;
    double price;
};


#endif //LAB1_PRODUCT_H
