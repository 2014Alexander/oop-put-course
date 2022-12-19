//
// Created by PC on 11.12.2022.
//

#ifndef INHERITANCE00_COMPLEXEXPRESSION_H
#define INHERITANCE00_COMPLEXEXPRESSION_H

#include <iostream>
#include "../Tokens/TokensVector/TokensVector.h"
#include "../Operations/Operations.h"


using namespace std;

class ComplexExpression : public Expression {
public:
    ComplexExpression(TokensVector *tokens);

    double evaluate() override;

    Constant *asConstant();

private:

    TokensVector *tokens;
    Constant *resultConstant;

    void simplify();

    void simplifyOneStep();


    int topPriorityPosition();


};

#endif //INHERITANCE00_COMPLEXEXPRESSION_H
