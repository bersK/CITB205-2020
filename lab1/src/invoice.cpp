#include "invoice.h"

void Invoice::add(Product product, int qty) {
    bool found = false;
    for(auto el: itemList) {
        if(el.getProduct().getName() == product.getName()) {
            found = true;
            el.add(qty);
            break;
        }
    }
    
    if(!found) {
        itemList.push_back(Item(product, qty));
    }
}

int Invoice::quantityAt(int i) {
    return itemList[i].getQty();
}

double Invoice::totalAt(int i) {
    return itemList[i].getPrice();
}

Product& Invoice::productAt(int i) {
    return itemList[i].getProduct();
}

double Invoice::taxes() {
    return subtotal() * 0.10;
}

double Invoice::subtotal() {
    double sum = 0;
    for(auto el: itemList) {
        sum += el.getPrice();
    }
    return sum;
}

double Invoice::total() {
    return subtotal() + taxes();
}