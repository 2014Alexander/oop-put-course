//
// Created by PC on 10.12.2022.
//

#ifndef INHERITANCE00_TOKENSITERATOR_H
#define INHERITANCE00_TOKENSITERATOR_H


#include <stdexcept>
#include "RawToken.h"
#include "../../Types/Names.h"

class TokensIterator {
public:
    TokensIterator(const string &sourceString) :
            sourceString(sourceString), currentPos(0) {}

    Token *nextToken();

private:
    string sourceString;
    int currentPos;
    char currentChar;

    bool sourceEnd();

    string tokenString();

    void updateCurrentChar();


    bool space();

    bool digit();

    bool bracket_or_operator();

    bool illegalSign();
};



#endif //INHERITANCE00_TOKENSITERATOR_H
