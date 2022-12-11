//
// Created by PC on 09.12.2022.
//

#ifndef INHERITANCE00_ADD_H
#define INHERITANCE00_ADD_H


#include "Operation.h"

class Add : public Operation {
public:
    Add(Expression *arg1, Expression *arg2) : Operation(arg1, arg2) {
        name=Name::name_add;
    }

    double evaluate() {
        return arg1->evaluate() + arg2->evaluate();
    }
};


#endif //INHERITANCE00_ADD_H
