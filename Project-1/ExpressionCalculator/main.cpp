#include <iostream>
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

int main() {
    Expression *c1 = new Constant(5.2);
    Expression *c2 = new Constant(2);
    Expression *add = new Add(c1, c2);
    Expression *d = new Divide(c1, c2);
    Expression *minus = new Minus(c1, c2);
    Expression *multi = new Multiply(c1, c2);
//    cout<<multi->signFromName();
    Token *t = d;
    vector<Token *> tokens1;
//    Tokens *tokens = new Tokens(" 12+3  *( 2+ 3   *4)");
    Tokens *tokens = new Tokens(" 12+3  * 2/3+ 3");
    TokensVector elements = tokens->list();
//    Expression *compExp = new ComplexExpression(&elements);
//    compExp->evaluate();
//    for (int i = 0; i < elements.size(); ++i) {
//        Token *t = elements[i];
//        cout << t->sign() << endl;
//        if (t->type() == type_constant) {
//            RawToken *rawConst = static_cast<RawToken *>(t);
////            Constant *ce = static_cast<Constant *>(t);
//            cout << rawConst->content << endl;
//        }
//    }
    elements.toString();
    Expression *complex = new ComplexExpression(elements);
    double ev = complex->evaluate();
    cout<<ev<<endl;
//    TokensAsExpression te = TokensAsExpression(elements);
    //    cout << Names().nameFromSign("/") << endl;
//    TokensIterator *it = new TokensIterator("  12+3  *( 2+ 3   *4)");
//    e = tokens.elements;
//    e.push_back(c1);
//    e.push_back(c2);
//    e.push_back(multi);
//    e.push_back(t);
//    e.erase(e.begin()+1, e.begin()+2);
//    e.insert(e.begin() + 1, name_minus);
//    for (Token *token:e) {
//        cout << token->signFromName() << endl;
//    }
//    cout << e.size() << endl;
    return 0;
}
