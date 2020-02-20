#include "invoice.h"

void Invoice::add(Product product, int qty) {
    Item newItem(product, qty);
    itemList.push_back(newItem);
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