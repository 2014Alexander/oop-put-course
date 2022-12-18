#include "../include/Expressions/ExpressionCalculator.h"

int main() {
    ExpressionCalculator("7 -11 + 3 *(   2- 3  *4)").printResult();
    ExpressionCalculator("(7  + 3 *(   2/ 3  *4))/2").printResult();

    return 0;
}
