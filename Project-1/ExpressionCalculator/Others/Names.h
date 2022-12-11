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


Name Names::nameFromSign(string sign) {
    char firstChar = sign[0];
    if (firstChar >= '0' && firstChar <= '9') {
        return Name::constant;
    }
    if (names.count(sign) == 0) {
        throw invalid_argument("Unknown sign! (nameFromSign)");
    } else {
        return names[sign];
    }
}

map<string, Name> Names::names = {{"+", Name::add},
                                  {"-", Name::minus},
                                  {"*", Name::multiply},
                                  {"/", Name::divide},
                                  {"C", Name::constant},
                                  {"(", Name::bracket_open},
                                  {")", Name::bracket_close}
};


#endif //INHERITANCE00_NAMES_H
