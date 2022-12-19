//
// Created by PC on 19.12.2022.
//

#include "../../include/Operations/Divide.h"

Divide::Divide(Expression *arg1, Expression *arg2) : Operation(arg1, arg2) {
    name = Name::name_divide;
}

double Divide::evaluate() {
    return arg1->evaluate() / arg2->evaluate();
}
