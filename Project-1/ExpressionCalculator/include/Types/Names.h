//
// Created by PC on 11.12.2022.
//

#ifndef INHERITANCE00_NAMES_H
#define INHERITANCE00_NAMES_H


#include <string>
#include <map>
#include "Name.h"

using namespace std;

class Names {
public:

    Name nameFromSign(string);

private:
    static map<string, Name> names;
};


#endif //INHERITANCE00_NAMES_H
