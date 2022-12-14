//
// Created by PC on 09.12.2022.
//

#ifndef INHERITANCE00_OPERATION_H
#define INHERITANCE00_OPERATION_H


#include <iostream>
#include "../Expressions/Expression.h"
#include "../Expressions/Constant.h"
#include "OperationPriority.h"

using namespace std;

class Operation : public Expression {
public:

    Operation(Expression *arg1, Expression *arg2) {
        this->arg1 = arg1;
        this->arg2 = arg2;
    }

    Expression *arg1, *arg2;
};


#endif //INHERITANCE00_OPERATION_H
