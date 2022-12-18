//
// Created by PC on 17.12.2022.
//

#ifndef INHERITANCE00_NESTEDBRACKETS_H
#define INHERITANCE00_NESTEDBRACKETS_H


#include "../Tokens/TokensVector/TokensVector.h"
#include "ComplexExpression.h"

class NestedBrackets {
public:
    NestedBrackets(TokensVector *tokens) {
        this->tokens = tokens;
    }

    void replaceMostNestedByConstant();

    bool brackets();

private:

    TokensVector *tokens;

    void findMostNestedIndexes();

    int startIndex;
    int endIndex;
};

bool NestedBrackets::brackets() {
    int flag = 0;
    for (int i = 0; i < tokens->size(); ++i) {
        if (tokens->elementByIndex(i)->type() == type_bracket) {
            flag = 1;
            break;
        }
    }
    return flag;
}

void NestedBrackets::replaceMostNestedByConstant() {
    findMostNestedIndexes();
    TokensVector *subVector = new TokensVector(tokens, startIndex, endIndex);
    ComplexExpression *complex = new ComplexExpression(subVector);
    Constant *bracketsAsConstant = complex->asConstant();
    tokens->removeElements(startIndex, endIndex + 1);
    tokens->replaceElementsBy(startIndex - 1, bracketsAsConstant);
}

void NestedBrackets::findMostNestedIndexes() {
    int start = -1;
    int end = -1;
    for (int i = 0; i < tokens->size(); ++i) {
        if (tokens->elementByIndex(i)->name == name_bracket_close) {
            end = i - 1;
            break;
        }
    }
    for (int i = end; i >= 0; --i) {
        if (tokens->elementByIndex(i)->name == name_bracket_open) {
            start = i + 1;
            break;
        }
    }
    startIndex = start;
    endIndex = end;
}

#endif //INHERITANCE00_NESTEDBRACKETS_H
