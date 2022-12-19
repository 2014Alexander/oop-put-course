//
// Created by PC on 09.12.2022.
//

#ifndef INHERITANCE00_OPERATION_H
#define INHERITANCE00_OPERATION_H


#include <iostream>
#include "OperationPriority.h"
#include "../Expressions/Expression.h"

using namespace std;

class Operation : public Expression {
public:

    Operation(Expression *arg1, Expression *arg2);

    Expression *arg1, *arg2;
};


#endif //INHERITANCE00_OPERATION_H
