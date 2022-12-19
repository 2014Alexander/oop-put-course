//
// Created by PC on 09.12.2022.
//

#ifndef INHERITANCE00_MINUS_H
#define INHERITANCE00_MINUS_H

#include "Operation.h"

class Minus : public Operation {
public:
    Minus(Expression *arg1, Expression *arg2);

    double evaluate();
};


#endif //INHERITANCE00_MINUS_H
