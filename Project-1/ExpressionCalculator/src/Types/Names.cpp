//
// Created by PC on 19.12.2022.
//
#include "../../include/Types/Names.h"
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
