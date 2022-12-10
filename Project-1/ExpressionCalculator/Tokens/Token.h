//
// Created by PC on 09.12.2022.
//

#ifndef INHERITANCE00_TOKEN_H
#define INHERITANCE00_TOKEN_H


#include <map>
#include "../Others/Name.h"

using namespace std;

class Token {
private:
    map<Name, string> signs;

    void initSigns() {
        signs[Name::add] = "+";
        signs[Name::minus] = "-";
        signs[Name::multiply] = "*";
        signs[Name::divide] = "/";
        signs[Name::constant] = "C";
        signs[Name::bracket_open] = "(";
        signs[Name::bracket_close] = ")";
    }

public:
    Token() {
        initSigns();
    }

    string sign() {
        return signs[name];
    }

    Name name;
};


#endif //INHERITANCE00_TOKEN_H
