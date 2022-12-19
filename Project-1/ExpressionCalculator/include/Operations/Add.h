//
// Created by PC on 09.12.2022.
//

#ifndef INHERITANCE00_ADD_H
#define INHERITANCE00_ADD_H


#include "Operation.h"

class Add : public Operation {
public:
    Add(Expression *arg1, Expression *arg2);

    double evaluate();
};


#endif //INHERITANCE00_ADD_H
