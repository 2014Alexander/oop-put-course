//
// Created by PC on 10.12.2022.
//

#ifndef INHERITANCE00_TOKENSITERATOR_H
#define INHERITANCE00_TOKENSITERATOR_H


#include <stdexcept>
#include "RawToken.h"
#include "../../Others/Names.h"

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

Token *TokensIterator::nextToken() {
    string tokenStr = tokenString();
    if (tokenStr == "") {
        return nullptr;
    }

    return new RawToken(tokenStr, Names().nameFromSign(tokenStr));
}


bool TokensIterator::sourceEnd() {
    return currentPos >= sourceString.size();
}

bool TokensIterator::space() {
    return currentChar == ' ';
}

bool TokensIterator::digit() {
    return currentChar >= '0' && currentChar <= '9';
}

bool TokensIterator::bracket_or_operator() {
    bool result;
    string operators = "()*/+-";
    if (operators.find(currentChar) != string::npos) {
        result = true;
    } else {
        result = false;
    }
    return result;
}

void TokensIterator::updateCurrentChar() {
    currentChar = sourceString[currentPos];
}

bool TokensIterator::illegalSign() {
    return !space() && !digit() && !bracket_or_operator();
}

string TokensIterator::tokenString() {
    if (sourceEnd()) {
        return "";
    }
    string result = "";
    updateCurrentChar();
    while (space()) {
        currentPos++;
        if (sourceEnd()) {
            return "";
        }
        updateCurrentChar();
    }
    if (illegalSign()) {
        string msg = "Illegal signFromName ='" + currentChar;
        msg += "', on position: " + currentPos;
        throw invalid_argument(msg);
    }
    if (bracket_or_operator()) {
        result = currentChar;
        currentPos++;
    } else {
        do {
            result += currentChar;
            currentPos++;
            if (sourceEnd()) {
                break;
            }
            updateCurrentChar();
        } while (digit());
    }
    return result;
}


#endif //INHERITANCE00_TOKENSITERATOR_H
