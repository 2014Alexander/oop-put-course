//
// Created by PC on 09.12.2022.
//

#ifndef INHERITANCE00_MULTIPLY_H
#define INHERITANCE00_MULTIPLY_H


class Multiply : public Operation {
public:
    Multiply(Expression *arg1, Expression *arg2) : Operation(arg1, arg2) {
        name = Name::name_multiply;
    }

    double evaluate() {
        return arg1->evaluate() * arg2->evaluate();
    }
};


#endif //INHERITANCE00_MULTIPLY_H
