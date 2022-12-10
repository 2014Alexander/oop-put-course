//
// Created by PC on 09.12.2022.
//

#ifndef INHERITANCE00_MINUS_H
#define INHERITANCE00_MINUS_H

#include "Operation.h"

class Minus : public Operation {
public:
    Minus(Expression *arg1, Expression *arg2) : Operation(arg1, arg2) {
        name = Name::minus;
    }

    double evaluate() {
        return arg1->evaluate() - arg2->evaluate();
    }
};


#endif //INHERITANCE00_MINUS_H
