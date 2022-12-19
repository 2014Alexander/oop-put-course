//
// Created by PC on 19.12.2022.
//

#include "../../../include/Tokens/Tokenization/TokensIterator.h"
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
