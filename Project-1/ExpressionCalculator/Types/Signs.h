//
// Created by PC on 11.12.2022.
//

#ifndef INHERITANCE00_SIGNS_H
#define INHERITANCE00_SIGNS_H


using namespace std;

class Signs {
public:

    string signFromName(Name name);


private:
    static map<Name, string> signs;
};

string Signs::signFromName(Name name) {
    string sgn = "";
    sgn = signs[name];
    if (sgn != "") {
        return sgn;
    } else {
        throw invalid_argument("Unknown name! (signFromName)");
    }
}

map<Name, string> Signs::signs = {{Name::name_add,          "+"},
                                  {Name::name_minus,        "-"},
                                  {Name::name_multiply,     "*"},
                                  {Name::name_divide,       "/"},
                                  {Name::name_constant,     "C"},
                                  {Name::name_bracket_open, "("},
                                  {Name::name_bracket_close, ")"}
};
#endif //INHERITANCE00_SIGNS_H
