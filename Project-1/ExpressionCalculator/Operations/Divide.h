//
// Created by PC on 09.12.2022.
//

#ifndef INHERITANCE00_DIVIDE_H
#define INHERITANCE00_DIVIDE_H


#include "Operation.h"

class Divide : public Operation {
public:
    Divide(Expression *arg1, Expression *arg2) : Operation(arg1, arg2) {
        name = Name::divide;
    }

    double evaluate() {
        return arg1->evaluate() / arg2->evaluate();
    }
};


#endif //INHERITANCE00_DIVIDE_H
