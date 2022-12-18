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
    ExpressionCalculator(string expressionStr) : expressionStr(expressionStr) {}

    double result();

    void printResult();

private:
    string expressionStr;
    double value;

    void calc();
};

double ExpressionCalculator::result() {
    calc();
    return value;
}

void ExpressionCalculator::calc() {
    Tokens *tokens = new Tokens(expressionStr);
    TokensVector *tokensVector = tokens->tokensVector();
    Expression *expression = new TokensAsExpression(tokensVector);
    value = expression->evaluate();
}

void ExpressionCalculator::printResult() {
    calc();
    cout << expressionStr << " = " << value << endl;
}


#endif //INHERITANCE00_EXPRESSIONCALCULATOR_H
