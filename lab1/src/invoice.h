#ifndef LAB1_INVOICE_H
#define LAB1_INVOICE_H


#include <vector>
#include "product.h"
#include "item.h"

using std::vector;

class Invoice {
public:
    vector<Item> itemList;
public:
    Product &productAt(int i);
    double taxes();
    double total();
    double subtotal();
    double totalAt(int i);
    int quantityAt(int i);
    void add(Product product, int qty);
};


#endif //LAB1_INVOICE_H
