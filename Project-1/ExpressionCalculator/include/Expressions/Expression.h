//
// Created by PC on 09.12.2022.
//

#ifndef INHERITANCE00_EXPRESSION_H
#define INHERITANCE00_EXPRESSION_H


#include "../Tokens/Token.h"

class Expression: public Token{
public:
    virtual double evaluate() = 0;
};


#endif //INHERITANCE00_EXPRESSION_H
