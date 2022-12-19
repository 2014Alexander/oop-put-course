//
// Created by PC on 19.12.2022.
//

#include "../../include/Operations/OperationPriority.h"


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