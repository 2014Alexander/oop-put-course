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
        return Name::name_constant;
    }
    if (names.count(sign) == 0) {
        throw invalid_argument("Unknown name! (nameFromSign)");
    } else {
        return names[sign];
    }
}

map<string, Name> Names::names = {{"+", Name::name_add},
                                  {"-", Name::name_minus},
                                  {"*", Name::name_multiply},
                                  {"/", Name::name_divide},
                                  {"C", Name::name_constant},
                                  {"E", Name::name_complex_expression},
                                  {"(", Name::name_bracket_open},
                                  {")", Name::name_bracket_close}
};


#endif //INHERITANCE00_NAMES_H
