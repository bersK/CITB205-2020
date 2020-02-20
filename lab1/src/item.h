#ifndef LAB1_ITEM_H
#define LAB1_ITEM_H


#include "product.h"

class Item {
public:
    Item(Product in_product, int in_qt) : product(in_product), qt(in_qt) {
        price = product.getPrice() * qt;
    }

    Product &getProduct() { return product; };

    void add(int qty) { qt += qty; };
    double getPrice() { return price; };
    int getQty() { return qt; };

private:
    Product product;
    int qt;
    double price;
};


#endif //LAB1_ITEM_H
