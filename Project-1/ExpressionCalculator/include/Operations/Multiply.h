//
// Created by PC on 09.12.2022.
//

#ifndef INHERITANCE00_MULTIPLY_H
#define INHERITANCE00_MULTIPLY_H


#include "Operation.h"

class Multiply : public Operation {
public:
    Multiply(Expression *arg1, Expression *arg2);

    double evaluate();
};


#endif //INHERITANCE00_MULTIPLY_H
