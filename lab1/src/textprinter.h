#ifndef LAB1_TEXTPRINTER_H
#define LAB1_TEXTPRINTER_H


#include "invoice.h"

class TextPrinter {
public:
    void print(std::ostream& out, Invoice& invoice);
private:
};


#endif //LAB1_TEXTPRINTER_H
