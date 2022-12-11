#include <iostream>
#include "Operations/Operation.h"
#include "Operations/Constant.h"
#include "Operations/Add.h"
#include "Operations/Minus.h"
#include "Operations/Multiply.h"
#include "Operations/Divide.h"
#include "Others/Name.h"
#include "Tokens/Token.h"
#include "Tokens/BracketOpen.h"
#include "Tokens/BracketClose.h"
#include "Tokens/Tokens.h"
#include "Tokens/Tokenization/TokensIterator.h"
#include "Tokens/Tokenization/RawToken.h"
#include "Others/Signs.h"
#include "Others/Names.h"

int main() {
    Expression *c1 = new Constant(5.2);
    Expression *c2 = new Constant(2);
    Expression *add = new Add(c1, c2);
    Expression *d = new Divide(c1, c2);
    Expression *minus = new Minus(c1, c2);
    Expression *multi = new Multiply(c1, c2);
//    cout<<multi->signFromName();
    Token *t = d;
    Tokens *tokens = new Tokens("  12+3  *( 2+ 3   *4)");
    tokens->list();
    cout << Names().nameFromSign("/") << endl;
//    TokensIterator *it = new TokensIterator("  12+3  *( 2+ 3   *4)");
//    e = tokens.elements;
//    e.push_back(c1);
//    e.push_back(c2);
//    e.push_back(multi);
//    e.push_back(t);
//    e.erase(e.begin()+1, e.begin()+2);
//    e.insert(e.begin() + 1, minus);
//    for (Token *token:e) {
//        cout << token->signFromName() << endl;
//    }
//    cout << e.size() << endl;
    return 0;
}
