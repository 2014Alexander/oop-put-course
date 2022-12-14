//
// Created by PC on 11.12.2022.
//

#ifndef INHERITANCE00_CHECKEDTOKENSRESULTS_H
#define INHERITANCE00_CHECKEDTOKENSRESULTS_H
using namespace std;

class CheckedTokensResults {
public:
    CheckedTokensResults(TokensVector t) : tokens(t) {}

public:

    bool correct();

private:
    TokensVector tokens;

    bool correctSyntax();

    bool correctBrackets();

};

/*
 *  operations must be between the numbers
 */
bool CheckedTokensResults::correctSyntax() {
    bool result = true;
    Type shouldBeNext = type_constant;
    for (int i = 0; i < tokens.tokensSize(); ++i) {
        Token *t = tokens.elementByIndex(i);
        Type type = t->type();
        if (type != type_bracket) {
            if (type != shouldBeNext) {
                result = false;
                break;
            } else {
                shouldBeNext = (shouldBeNext == type_constant) ?
                               type_operator : type_constant;
            }
        }
    }
    if (shouldBeNext == type_constant) { //the last one should be a number, not an operator
        result = false;
    }
    return result;
}

bool CheckedTokensResults::correctBrackets() {
    int openedCount = 0;
    int closeCount = 0;
    for (int i = 0; i < tokens.tokensSize(); ++i) {
        Token *t = tokens.elementByIndex(i);
        Type type = t->type();
        if (type == type_bracket) {
            if (t->name == name_bracket_open) {
                openedCount++;
            } else {
                closeCount++;
            }
        }
    }
    if (openedCount != closeCount) {
        return false;
    } else {
        return true;
    }
}

bool CheckedTokensResults::correct() {
    return correctSyntax() && correctBrackets();
}


#endif //INHERITANCE00_CHECKEDTOKENSRESULTS_H
