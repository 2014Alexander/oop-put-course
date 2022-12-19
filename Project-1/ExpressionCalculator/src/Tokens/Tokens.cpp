//
// Created by PC on 19.12.2022.
//
#include "../../include/Tokens/Tokens.h"

void Tokens::tokenize() {
    TokensIterator iterator = TokensIterator(sourceStr);
    Token *token;
    while ((token = iterator.nextToken()) != nullptr) {
//        cout << token->sign() << endl;
        elements.push_back(token);
    }

}

Tokens::Tokens(string source) : sourceStr(source) {}

TokensVector *Tokens::tokensVector() {
    tokenize();
    return new TokensVector(elements);
}
