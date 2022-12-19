//
// Created by PC on 19.12.2022.
//
#include "../../include/Expressions/ExpressionCalculator.h"


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

ExpressionCalculator::ExpressionCalculator(string expressionStr) : expressionStr(expressionStr) {}