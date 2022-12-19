//
// Created by PC on 11.12.2022.
//

#ifndef INHERITANCE00_TOKENSASEXPRESSION_H
#define INHERITANCE00_TOKENSASEXPRESSION_H


#include "../Tokens/CheckedTokensResults.h"
#include "NestedBrackets.h"

using namespace std;

class TokensAsExpression : public Expression {
public:
    TokensAsExpression(TokensVector *t);

    double evaluate() override;

private:

    Constant *resultConstant;
    TokensVector *tokens;

    void replaceRawConstantsToExpressions();

    Expression *constantAsExpression(Token *);
};


#endif //INHERITANCE00_TOKENSASEXPRESSION_H
