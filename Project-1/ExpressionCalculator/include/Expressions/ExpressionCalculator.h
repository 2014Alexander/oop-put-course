//
// Created by PC on 18.12.2022.
//

#ifndef INHERITANCE00_EXPRESSIONCALCULATOR_H
#define INHERITANCE00_EXPRESSIONCALCULATOR_H

#include "../Tokens/Tokens.h"
#include "TokensAsExpression.h"

using namespace std;

class ExpressionCalculator {
public:
    ExpressionCalculator(string expressionStr);

    double result();

    void printResult();

private:
    string expressionStr;
    double value;

    void calc();
};


#endif //INHERITANCE00_EXPRESSIONCALCULATOR_H
