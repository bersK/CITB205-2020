#ifndef LAB1_ITEM_H
#define LAB1_ITEM_H


#include "product.h"

class Item {
public:
    Product product;
    int qt;
    double price;
    Item(Product in_product, int in_qt) : product(in_product), qt(in_qt) {
        price = product.getPrice() * qt;
    }
};


#endif //LAB1_ITEM_H
