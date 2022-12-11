//
// Created by PC on 10.12.2022.
//

#ifndef INHERITANCE00_RAWTOKEN_H
#define INHERITANCE00_RAWTOKEN_H


#include <string>
#include "../../Others/Name.h"
#include "../Token.h"

using namespace std;

class RawToken : public Token {
public:
    string content;

    RawToken(const string &content, Name name) :
            content(content) {
        this->name = name;
    }
};


#endif //INHERITANCE00_RAWTOKEN_H
