//
// Created by PC on 11.12.2022.
//

#ifndef INHERITANCE00_COMPLEXEXPRESSION_H
#define INHERITANCE00_COMPLEXEXPRESSION_H

#include <iostream>
#include "Expression.h"
#include "../Operations/Operations.h"
#include "../Tokens/TokensVector/TokensVector.h"

using namespace std;

class ComplexExpression : public Expression {
public:
    ComplexExpression(TokensVector *tokens) {
        this->tokens = tokens;
    }

    double evaluate() override;

    Constant *asConstant();

private:

    TokensVector *tokens;
    Constant *resultConstant;

    void simplify();

    void simplifyOneStep();


    int topPriorityPosition();


};

double ComplexExpression::evaluate() {
    simplify();
    return resultConstant->evaluate();
}

void ComplexExpression::simplify() {
    while (tokens->size() > 1) {
        simplifyOneStep();
    }
    Token *lastToken = tokens->elementByIndex(0);
    resultConstant = static_cast<Constant *>(lastToken);
}

void ComplexExpression::simplifyOneStep() {
    int topPriorityIndex = topPriorityPosition();
    Token *priorityToken = tokens->elementByIndex(topPriorityIndex);
    Token *arg1 = tokens->elementByIndex(topPriorityIndex - 1);
    Token *arg2 = tokens->elementByIndex(topPriorityIndex + 1);
    Operation *op = Operations(priorityToken).newOperation(arg1, arg2);
    Constant *constant = new Constant(op->evaluate());
    tokens->replaceOperationByConstant(constant, topPriorityIndex);
//    tokens.toString();
}

int ComplexExpression::topPriorityPosition() {
    int topPos = -1;
    int topPriority = -1;
    for (int i = 0; i < tokens->size(); ++i) {
        Token *t = tokens->elementByIndex(i);
        Type type = t->type();
        if (type == type_operator) {
            int priority = OperationPriority(t->name).priority();
            if (priority > topPriority) {
                topPriority = priority;
                topPos = i;
            }
        }
    }
    return topPos;
}


Constant *ComplexExpression::asConstant() {
    simplify();
    return resultConstant;
}


#endif //INHERITANCE00_COMPLEXEXPRESSION_H
