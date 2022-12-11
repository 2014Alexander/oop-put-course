//
// Created by PC on 09.12.2022.
//

#ifndef INHERITANCE00_TOKEN_H
#define INHERITANCE00_TOKEN_H


#include <map>
#include "../Types/Name.h"
#include "../Types/Signs.h"

using namespace std;

class Token {


public:
    Token() {
    }

    string sign() {
        return Signs().signFromName(name);
    }

    Name name;
};


#endif //INHERITANCE00_TOKEN_H
