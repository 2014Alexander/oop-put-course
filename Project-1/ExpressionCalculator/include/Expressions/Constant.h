//
// Created by PC on 09.12.2022.
//

#ifndef INHERITANCE00_CONSTANT_H
#define INHERITANCE00_CONSTANT_H


#include <iostream>
#include "Expression.h"

using namespace std;

class Constant : public Expression {
private:
    double value;
public:
    Constant(double value);

    double evaluate();
};


#endif //INHERITANCE00_CONSTANT_H
