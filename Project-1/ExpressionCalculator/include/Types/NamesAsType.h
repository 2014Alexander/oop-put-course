//
// Created by PC on 11.12.2022.
//

#ifndef INHERITANCE00_NAMESASTYPE_H

#define INHERITANCE00_NAMESASTYPE_H

#include <stdexcept>
#include "Name.h"

using namespace std;

class NamesAsType {
public:
    NamesAsType(Name name);

    Type type();

private:
    Name name;
};




#endif //INHERITANCE00_NAMESASTYPE_H
