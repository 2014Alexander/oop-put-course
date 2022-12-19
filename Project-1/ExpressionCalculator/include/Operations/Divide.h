//
// Created by PC on 09.12.2022.
//

#ifndef INHERITANCE00_DIVIDE_H
#define INHERITANCE00_DIVIDE_H


#include "Operation.h"

class Divide : public Operation {
public:
    Divide(Expression *arg1, Expression *arg2);

    double evaluate();
};


#endif //INHERITANCE00_DIVIDE_H
