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

    TokensVector(TokensVector* inputVector, int indexStart, int size);

    TokensVector(vector<Token *> tokens) {
        convertVectorToArray(tokens);
    }

    void toString();

    Token *elementByIndex(int index);


    int size() {
        return _size;
    }


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

void TokensVector::convertVectorToArray(vector<Token *> tokens) {
    _size = tokens.size();
    elements = new Token *[_size];
    for (int i = 0; i < _size; ++i) {
        elements[i] = tokens[i];
    }
}

Token *TokensVector::elementByIndex(int index) {
    return elements[index];
}

void TokensVector::removeThreeElements(int centerIndex) {
    if (centerIndex >= _size || centerIndex <= 0) {
        throw out_of_range("Out of the tokens range (removeElements)");
    }
    for (int i = centerIndex + 2; i < _size; ++i) {
        elements[i - 3] = elements[i];
    }
    _size -= 3;
}

void TokensVector::removeElementsAround(int centerIndex) {
    if (centerIndex >= _size || centerIndex <= 0) {
        throw out_of_range("Out of the tokens range (removeElements)");
    }
    elements[centerIndex - 1] = elements[centerIndex];
    for (int i = centerIndex + 2; i < _size; ++i) {
        elements[i - 2] = elements[i];
    }
    _size -= 2;
}

void TokensVector::toString() {
    cout << "----------" << endl;
    for (int i = 0; i < _size; ++i) {
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

TokensVector::TokensVector(TokensVector *inputVector, int indexStart, int indexEnd) {
    this->_size = indexEnd - indexStart + 1;
    elements = new Token *[_size];
    for (int i = 0; i < _size; ++i) {
        elements[i] = inputVector->elements[indexStart + i];
    }
}

void TokensVector::removeElements(int startIndex, int endIndex) {
    int n = endIndex - startIndex + 1;
    for (int i = endIndex + 1; i < _size; ++i) {
        elements[i - n] = elements[i];
    }
    _size -= n;

}


#endif //INHERITANCE00_TOKENSVECTOR_H
