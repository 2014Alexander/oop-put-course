//
// Created by PC on 09.12.2022.
//

#ifndef INHERITANCE00_TOKENS_H
#define INHERITANCE00_TOKENS_H

#include <bits/stdc++.h>
#include "Token.h"
#include "Tokenization/TokensIterator.h"
#include "../Types/NamesAsType.h"
#include "../Types/Signs.h"
#include "TokensVector/TokensVector.h"

using namespace std;

class Tokens {
public:
    Tokens(string source);

    TokensVector *tokensVector();


private:
    string sourceStr;
    vector<Token *> elements;

    void tokenize();
};


#endif //INHERITANCE00_TOKENS_H
