//
// Created by PC on 19.12.2022.
//

#include <stdexcept>
#include <map>
#include "../../include/Types/Signs.h"

using namespace std;

string Signs::signFromName(Name name) {
    string sgn = "";
    sgn = signs[name];
    if (sgn != "") {
        return sgn;
    } else {
        throw invalid_argument("Unknown name! (signFromName)");
    }
}

map<Name, string> Signs::signs = {{Name::name_add,                "+"},
                                  {Name::name_minus,              "-"},
                                  {Name::name_multiply,           "*"},
                                  {Name::name_divide,             "/"},
                                  {Name::name_constant,           "C"},
                                  {Name::name_complex_expression, "E"},
                                  {Name::name_bracket_open,       "("},
                                  {Name::name_bracket_close,      ")"}
};