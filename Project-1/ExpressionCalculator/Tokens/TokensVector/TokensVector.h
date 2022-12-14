//
// Created by PC on 13.12.2022.
//

#ifndef INHERITANCE00_TOKENSVECTOR_H
#define INHERITANCE00_TOKENSVECTOR_H


#include "../Token.h"
#include <bits/stdc++.h>

using namespace std;

class TokensVector {
public:
    TokensVector() {};

    TokensVector(vector<Token *> tokens) {
        convertVectorToArray(tokens);
    }

    void toString();

    Token *elementByIndex(int index);


    int tokensSize() {
        return size;
    }


    void replaceElementsBy(int index, Token *token);

    void replaceOperationByConstant(Constant *constant, int index);

private:

    void removeThreeElements(int centerIndex);

    void removeElementsAround(int centerIndex);

    void convertVectorToArray(vector<Token *> tokens);

    int size;

    Token **elements;
};

void TokensVector::convertVectorToArray(vector<Token *> tokens) {
    size = tokens.size();
    elements = new Token *[size];
    for (int i = 0; i < size; ++i) {
        elements[i] = tokens[i];
    }
}

Token *TokensVector::elementByIndex(int index) {
    return elements[index];
}

void TokensVector::removeThreeElements(int centerIndex) {
    if (centerIndex >= size || centerIndex <= 0) {
        throw out_of_range("Out of the elements range (removeElements)");
    }
    for (int i = centerIndex + 2; i < size; ++i) {
        elements[i - 3] = elements[i];
    }
    size -= 3;
}

void TokensVector::removeElementsAround(int centerIndex) {
    if (centerIndex >= size || centerIndex <= 0) {
        throw out_of_range("Out of the elements range (removeElements)");
    }
    elements[centerIndex - 1] = elements[centerIndex];
    for (int i = centerIndex + 2; i < size; ++i) {
        elements[i - 2] = elements[i];
    }
    size -= 2;
}

void TokensVector::toString() {
    cout << "----------" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "index = " << i << ", [" << elements[i]->sign() << "]" << endl;
    }
}

void TokensVector::replaceElementsBy(int index, Token *token) {
    elements[index] = token;
}

void TokensVector::replaceOperationByConstant(Constant *constant, int index) {
    removeElementsAround(index);
    elements[index - 1] = constant;
}


#endif //INHERITANCE00_TOKENSVECTOR_H
