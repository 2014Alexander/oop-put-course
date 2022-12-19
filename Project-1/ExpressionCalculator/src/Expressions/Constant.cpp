//
// Created by PC on 19.12.2022.
//

#include "../../include/Expressions/Constant.h"

Constant::Constant(double value) {
    this->value = value;
    name = Name::name_constant;
}

double Constant::evaluate() {
    return value;
}
