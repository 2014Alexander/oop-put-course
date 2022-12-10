//
// Created by PC on 09.12.2022.
//

#ifndef INHERITANCE00_BRACKETCLOSE_H
#define INHERITANCE00_BRACKETCLOSE_H


#include "Token.h"

class BracketClose : public Token {
public:
    BracketClose() {
        name = Name::bracket_close;
    }
};


#endif //INHERITANCE00_BRACKETCLOSE_H
