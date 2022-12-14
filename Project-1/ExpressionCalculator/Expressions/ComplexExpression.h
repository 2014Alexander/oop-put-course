//
// Created by PC on 11.12.2022.
//

#ifndef INHERITANCE00_COMPLEXEXPRESSION_H
#define INHERITANCE00_COMPLEXEXPRESSION_H

#include <iostream>
#include "Expression.h"
#include "../Operations/Operations.h"

using namespace std;

class ComplexExpression : public Expression {
public:
    ComplexExpression(TokensVector t) {
        tokens = t;
    }

    double evaluate() override;

private:

    TokensVector tokens;
    Constant *resultConstant;

    void simplify();

    void simplifyOneStep();

    void replaceRawConstantsToExpressions();

    Expression *constantAsExpression(Token *);

    int topPriorityPosition();

    void replaceTokens(int index, Token *replaceTo);
};

double ComplexExpression::evaluate() {
    simplify();
    return resultConstant->evaluate();
}

void ComplexExpression::simplify() {
    replaceRawConstantsToExpressions();
    while (tokens.tokensSize() > 1) {
        simplifyOneStep();
    }
    Token *lastToken = tokens.elementByIndex(0);
    resultConstant = static_cast<Constant *>(lastToken);
}

void ComplexExpression::simplifyOneStep() {
    int topPriorityIndex = topPriorityPosition();
    Token *priorityToken = tokens.elementByIndex(topPriorityIndex);
    Token *arg1 = tokens.elementByIndex(topPriorityIndex - 1);
    Token *arg2 = tokens.elementByIndex(topPriorityIndex + 1);
    Operation *op = Operations(priorityToken).newOperation(arg1, arg2);
    Constant *constant = new Constant(op->evaluate());
    tokens.replaceOperationByConstant(constant, topPriorityIndex);
//    tokens.toString();
}

int ComplexExpression::topPriorityPosition() {
    int topPos = -1;
    int topPriority = -1;
    for (int i = 0; i < tokens.tokensSize(); ++i) {
        Token *t = tokens.elementByIndex(i);
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

void ComplexExpression::replaceRawConstantsToExpressions() {
    for (int i = 0; i < tokens.tokensSize(); ++i) {
        Token *token = tokens.elementByIndex(i);
        Type type = token->type();
        if (type == type_constant) {
            tokens.replaceElementsBy(i, constantAsExpression(token));
        }
    }
}

Expression *ComplexExpression::constantAsExpression(Token *rawConstToken) {
    RawToken *rawConst = static_cast<RawToken *>(rawConstToken);
    double value = stoi(rawConst->content);
    return new Constant(value);
}


#endif //INHERITANCE00_COMPLEXEXPRESSION_H
