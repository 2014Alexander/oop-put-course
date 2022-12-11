//
// Created by PC on 09.12.2022.
//

#ifndef INHERITANCE00_TOKENS_H
#define INHERITANCE00_TOKENS_H

#include <bits/stdc++.h>
#include "Token.h"
#include "Tokenization/TokensIterator.h"
#include "../Types/NamesAsType.h"

using namespace std;

class Tokens {
public:
    Tokens(string source) : sourceStr(source) {}

    vector<Token *> list() {
        tokenize();
        return elements;
    }


private:
    string sourceStr;
    vector<Token *> elements;

    void tokenize();
};

void Tokens::tokenize() {
    TokensIterator iterator = TokensIterator(sourceStr);
    Token *token;
    while ((token = iterator.nextToken()) != nullptr) {
        cout << NamesAsType(token->name).type() << endl;
        elements.push_back(token);
    }

}


#endif //INHERITANCE00_TOKENS_H