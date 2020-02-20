#ifndef LAB1_INVOICE_H
#define LAB1_INVOICE_H


#include <vector>
#include "product.h"
#include "item.h"

using std::vector;

class Invoice {
public:
    vector<Product> productList;
    double subtotal;
    double tax;
    double sumAll;
public:
    void add(Product product, int qty);
    
    void calcSubtotal();
    void calcTax();
    void calcAll();
};


#endif //LAB1_INVOICE_H
