//
// Created by PC on 13.12.2022.
//

#ifndef INHERITANCE00_TOKENSVECTOR_H
#define INHERITANCE00_TOKENSVECTOR_H

#include "../../Expressions/Constant.h"

//using namespace std;

#include <vector>


class TokensVector {
public:
    TokensVector();

    TokensVector(TokensVector *inputVector, int indexStart, int size);

    TokensVector(vector<Token *> tokens);

    void toString();

    Token *elementByIndex(int index);


    int size();


    void replaceElementsBy(int index, Token *token);

    void replaceOperationByConstant(Constant *constant, int index);

    void removeElements(int startIndex, int endIndex);

private:

    void removeThreeElements(int centerIndex);

    void removeElementsAround(int centerIndex);

    void convertVectorToArray(vector<Token *> tokens);

    int _size;

    Token **elements;
};

#endif //INHERITANCE00_TOKENSVECTOR_H