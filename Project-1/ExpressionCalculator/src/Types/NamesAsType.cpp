//
// Created by PC on 19.12.2022.
//


#include "../../include/Types/Type.h"
#include "../../include/Types/NamesAsType.h"


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

NamesAsType::NamesAsType(Name name) : name(name) {}
