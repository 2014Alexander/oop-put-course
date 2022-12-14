//
// Created by PC on 11.12.2022.
//

#ifndef INHERITANCE00_TOKENSASEXPRESSION_H
#define INHERITANCE00_TOKENSASEXPRESSION_H


#include "Expression.h"
#include "../Tokens/CheckedTokensResults.h"

using namespace std;

class TokensAsExpression : public Expression {
public:
    TokensAsExpression(TokensVector t) {
        sourceTokens = t;
        if (!CheckedTokensResults(sourceTokens).correct()) {
            throw invalid_argument("Syntax error");
        }
    }

    double evaluate() override;

private:
    bool tokensAreCorrect();

    Expression *mainExpression;
    TokensVector sourceTokens;
    TokensVector tokens;

    void copySourceTokens();
};


double TokensAsExpression::evaluate() {

    return mainExpression->evaluate();
}

#endif //INHERITANCE00_TOKENSASEXPRESSION_H
