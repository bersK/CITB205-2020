#include "invoice.h"

void Invoice::add(Product product, int qty) {
    bool found = false;
    for(auto el: itemList) {
        if(el.product.getName() == product.getName()) {
            found = true;
            el.qt += qty;
            break;
        }
    }
    
    if(!found) {
        itemList.push_back(Item(product, qty));
    }
}

int Invoice::quantityAt(int i) {
    return itemList[i].qt;
}

double Invoice::totalAt(int i) {
    return itemList[i].price;
}

Product Invoice::productAt(int i) {
    return itemList[i].product;
}

double Invoice::taxes() {
    return subtotal() * 0.10;
}

double Invoice::subtotal() {
    double sum = 0;
    for(auto el: itemList) {
        sum += el.price;
    }
    return sum;
}

double Invoice::total() {
    return subtotal() + taxes();
}