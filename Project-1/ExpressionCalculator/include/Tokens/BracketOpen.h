//
// Created by PC on 09.12.2022.
//

#ifndef INHERITANCE00_BRACKETOPEN_H
#define INHERITANCE00_BRACKETOPEN_H


#include "Token.h"

class BracketOpen : public Token {
public:
    BracketOpen() {
        name = Name::name_bracket_open;
    }
};


#endif //INHERITANCE00_BRACKETOPEN_H
