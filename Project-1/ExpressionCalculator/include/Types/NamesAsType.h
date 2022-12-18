//
// Created by PC on 11.12.2022.
//

#ifndef INHERITANCE00_NAMESASTYPE_H
#define INHERITANCE00_NAMESASTYPE_H

#include <string>
#include "Type.h"

using namespace std;

class NamesAsType {
public:
    NamesAsType(Name name) : name(name) {}

    Type type();

private:
    Name name;
};

Type NamesAsType::type() {
    Type result;
    switch (name) {
        case name_constant:
            result = type_constant;
            break;
        case name_bracket_open:
            result = type_bracket;
            break;
        case name_bracket_close:
            result = type_bracket;
            break;
        case name_add:
            result = type_operator;
            break;
        case name_minus:
            result = type_operator;
            break;
        case name_multiply:
            result = type_operator;
            break;
        case name_divide:
            result = type_operator;
            break;
        default:
            throw invalid_argument(
                    "The name out of types"
            );
    }
    return result;
}


#endif //INHERITANCE00_NAMESASTYPE_H
