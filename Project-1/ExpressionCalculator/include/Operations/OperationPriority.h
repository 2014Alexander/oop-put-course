//
// Created by PC on 14.12.2022.
//

#ifndef INHERITANCE00_OPERATIONPRIORITY_H
#define INHERITANCE00_OPERATIONPRIORITY_H


#include <string>
#include <map>
#include "../Types/Name.h"

using namespace std;

class OperationPriority {
public:
    OperationPriority();

    OperationPriority(Name name);

public:
    int priority();

private:
    Name name;
    static map<Name, int> priorityMap;
};


int OperationPriority::priority() {
    int p = -1;
    p = priorityMap[name];
    if (p != -1) {
        return p;
    } else {
        throw invalid_argument("Unknown name! (OperationPriority)");
    }
}

map<Name, int> OperationPriority::priorityMap = {
        {Name::name_add,                1},
        {Name::name_minus,              1},
        {Name::name_multiply,           2},
        {Name::name_divide,             2},
        {Name::name_constant,           0},
        {Name::name_complex_expression, 0},
        {Name::name_bracket_open,       3},
        {Name::name_bracket_close,      3}
};

OperationPriority::OperationPriority() {}

OperationPriority::OperationPriority(Name name) : name(name) {}

#endif //INHERITANCE00_OPERATIONPRIORITY_H
