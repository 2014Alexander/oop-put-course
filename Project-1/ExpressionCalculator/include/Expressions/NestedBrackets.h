//
// Created by PC on 17.12.2022.
//

#ifndef INHERITANCE00_NESTEDBRACKETS_H
#define INHERITANCE00_NESTEDBRACKETS_H


#include "../Tokens/TokensVector/TokensVector.h"
#include "ComplexExpression.h"

class NestedBrackets {
public:
    NestedBrackets(TokensVector *tokens);

    void replaceMostNestedByConstant();

    bool brackets();

private:

    TokensVector *tokens;

    void findMostNestedIndexes();

    int startIndex;
    int endIndex;
};

#endif //INHERITANCE00_NESTEDBRACKETS_H
