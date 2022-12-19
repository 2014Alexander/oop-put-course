//
// Created by PC on 19.12.2022.
//

#include "../../../include/Tokens/Tokenization/RawToken.h"

RawToken::RawToken(const string &content, Name name) :
        content(content) {
    this->name = name;
}
