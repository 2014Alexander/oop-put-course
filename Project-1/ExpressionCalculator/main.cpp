#include <iostream>
//#include <rpcndr.h>
#include "Operations/Operation.h"
#include "Expressions/Constant.h"
#include "Operations/Add.h"
#include "Operations/Minus.h"
#include "Operations/Multiply.h"
#include "Operations/Divide.h"
#include "Types/Name.h"
#include "Tokens/Token.h"
#include "Tokens/BracketOpen.h"
#include "Tokens/BracketClose.h"
#include "Tokens/Tokens.h"
#include "Tokens/Tokenization/TokensIterator.h"
#include "Tokens/Tokenization/RawToken.h"
#include "Types/Signs.h"
#include "Types/Names.h"
#include "Expressions/TokensAsExpression.h"
#include "Types/NamesAsType.h"
#include "Tokens/CheckedTokensResults.h"
#include "Expressions/ComplexExpression.h"
#include "Tokens/TokensVector/TokensVector.h"
#include "Operations/OperationPriority.h"
#include "Operations/Operations.h"
#include "Expressions/NestedBrackets.h"

int main() {
    Tokens *tokens = new Tokens("11 + (12+3  *( 2+ 3   *4)/5)");
    TokensVector *tokensVector = tokens->tokensVector();
    Expression *expression = new TokensAsExpression(tokensVector);
    double result = expression->evaluate();
    cout << result << endl;

    return 0;
}
