//
// Created by PC on 11.12.2022.
//

#ifndef INHERITANCE00_SIGNS_H
#define INHERITANCE00_SIGNS_H
#include <string>
#include "Name.h"

using namespace std;

class Signs {
public:

    string signFromName(Name name);


private:
    static map<Name, string> signs;
};


#endif //INHERITANCE00_SIGNS_H
