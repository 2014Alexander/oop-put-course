//
// Created by PC on 19.12.2022.
//

#include "../../include/Operations/Multiply.h"

Multiply::Multiply(Expression *arg1, Expression *arg2) : Operation(arg1, arg2) {
    name = Name::name_multiply;
}

double Multiply::evaluate() {
    return arg1->evaluate() * arg2->evaluate();
}
