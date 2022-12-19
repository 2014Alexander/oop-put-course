//
// Created by PC on 14.12.2022.
//

#ifndef INHERITANCE00_OPERATIONS_H
#define INHERITANCE00_OPERATIONS_H


#include "../Expressions/Expression.h"
#include "Operation.h"
#include "Add.h"
#include "Minus.h"
#include "Multiply.h"
#include "Divide.h"

class Operations {
private:
    Token *token;
public:
    Operations(Token *token);

    Operation *newOperation(Expression *arg1, Expression *arg2);

    Operation *newOperation(Token *arg1, Token *arg2);
};


#endif //INHERITANCE00_OPERATIONS_H
