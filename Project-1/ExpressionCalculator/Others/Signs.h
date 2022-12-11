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

map<Name, string> Signs::signs = {{Name::add,           "+"},
                                  {Name::minus,         "-"},
                                  {Name::multiply,      "*"},
                                  {Name::divide,        "/"},
                                  {Name::constant,      "C"},
                                  {Name::bracket_open,  "("},
                                  {Name::bracket_close, ")"}
};
#endif //INHERITANCE00_SIGNS_H
