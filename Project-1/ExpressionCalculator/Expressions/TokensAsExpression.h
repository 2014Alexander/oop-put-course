//
// Created by PC on 11.12.2022.
//

#ifndef INHERITANCE00_TOKENSASEXPRESSION_H
#define INHERITANCE00_TOKENSASEXPRESSION_H


#include "Expression.h"
#include <bits/stdc++.h>

using namespace std;

class TokensAsExpression : public Expression {
public:
    TokensAsExpression(vector<Token *> t) : sourceTokens(t) {
        if (!tokensAreCorrect()) {
            throw invalid_argument("Syntax error");
        }
        copySourceTokens();
    }

    double evaluate() override;

private:
    bool tokensAreCorrect();

    Expression *mainExpression;
    vector<Token *> sourceTokens;
    vector<Token *> tokens;

    void copySourceTokens();
};

/*
 *  operations must be between the numbers
 */
bool TokensAsExpression::tokensAreCorrect() {
    bool result = true;
    Type shouldBeNext = type_constant;
    for (Token *t:sourceTokens) {
        Type type = NamesAsType(t->name).type();
        if (type != type_bracket) {
            if (type != shouldBeNext) {
                result = false;
                break;
            } else {
                shouldBeNext = (shouldBeNext == type_constant) ?
                               type_operator : type_constant;
            }
        }
    }
    if (shouldBeNext == type_constant) { //the last one should be a number, not an operator
        result = false;
    }
    return result;
}

void TokensAsExpression::copySourceTokens() {
    for (Token *t:sourceTokens) {
        tokens.push_back(t);
    }

}

double TokensAsExpression::evaluate() {
    return mainExpression->evaluate();
}

#endif //INHERITANCE00_TOKENSASEXPRESSION_H
