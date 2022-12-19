//
// Created by PC on 10.12.2022.
//

#ifndef INHERITANCE00_RAWTOKEN_H
#define INHERITANCE00_RAWTOKEN_H


#include <string>
#include "../../Types/Name.h"
#include "../Token.h"

using namespace std;

class RawToken : public Token {
public:
    RawToken() {}

    string content;

    RawToken(const string &content, Name name);
};


#endif //INHERITANCE00_RAWTOKEN_H
