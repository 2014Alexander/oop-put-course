//
// Created by PC on 14.12.2022.
//

#ifndef INHERITANCE00_OPERATIONS_H
#define INHERITANCE00_OPERATIONS_H


#include "../Tokens/Token.h"
#include "Operation.h"
#include "Add.h"
#include "Minus.h"
#include "Multiply.h"
#include "Divide.h"

class Operations {
private:
    Token *token;
public:
    Operations(Token *token) : token(token) {}

    Operation *newOperation(Expression *arg1, Expression *arg2);

    Operation *newOperation(Token *arg1, Token *arg2);
};

Operation *Operations::newOperation(Expression *arg1, Expression *arg2) {
    switch (token->name) {
        case name_add:
            return new Add(arg1, arg2);
        case name_minus:
            return new Minus(arg1, arg2);
        case name_multiply:
            return new Multiply(arg1, arg2);
        case name_divide:
            return new Divide(arg1, arg2);
        default:
            throw invalid_argument("Invalid Operation name (newOperation");
    }
}

Operation *Operations::newOperation(Token *arg1, Token *arg2) {
    Expression *exp_arg1 = static_cast<Expression *>(arg1);
    Expression *exp_arg2 = static_cast<Expression *>(arg2);
    return newOperation(exp_arg1, exp_arg2);
}


#endif //INHERITANCE00_OPERATIONS_H
