//
// Created by PC on 11.12.2022.
//

#ifndef INHERITANCE00_TOKENSASEXPRESSION_H
#define INHERITANCE00_TOKENSASEXPRESSION_H


#include "Expression.h"
#include "../Tokens/CheckedTokensResults.h"
#include "ComplexExpression.h"
#include "NestedBrackets.h"

using namespace std;

class TokensAsExpression : public Expression {
public:
    TokensAsExpression(TokensVector *t) {
        this->tokens = t;
        if (!CheckedTokensResults(tokens).correct()) {
            throw invalid_argument("Syntax error: (TokensAsExpression Constructor)");
        }
    }

    double evaluate() override;

private:

    Constant *resultConstant;
    TokensVector *tokens;

    void replaceRawConstantsToExpressions();

    Expression *constantAsExpression(Token *);
};


double TokensAsExpression::evaluate() {
    replaceRawConstantsToExpressions();
    NestedBrackets nestedBrackets = NestedBrackets(tokens);
    while (nestedBrackets.brackets()) {
        nestedBrackets.replaceMostNestedByConstant();
    }
    ComplexExpression complex = ComplexExpression(tokens);
    resultConstant = complex.asConstant();
    return resultConstant->evaluate();
}

void TokensAsExpression::replaceRawConstantsToExpressions() {
    for (int i = 0; i < tokens->size(); ++i) {
        Token *token = tokens->elementByIndex(i);
        Type type = token->type();
        if (type == type_constant) {
            tokens->replaceElementsBy(i, constantAsExpression(token));
        }
    }
}

Expression *TokensAsExpression::constantAsExpression(Token *rawConstToken) {
    RawToken *rawConst = static_cast<RawToken *>(rawConstToken);
    double value = stoi(rawConst->content);
    return new Constant(value);
}

#endif //INHERITANCE00_TOKENSASEXPRESSION_H
