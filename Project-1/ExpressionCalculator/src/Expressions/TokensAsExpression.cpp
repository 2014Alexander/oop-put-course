//
// Created by PC on 19.12.2022.
//

#include "../../include/Expressions/TokensAsExpression.h"
#include "../../include/Tokens/Tokenization/RawToken.h"

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

TokensAsExpression::TokensAsExpression(TokensVector *t) {
    this->tokens = t;
    if (!CheckedTokensResults(tokens).correct()) {
        throw invalid_argument("Syntax error: (TokensAsExpression Constructor)");
    }
}
