//
// Created by PC on 11.12.2022.
//

#ifndef INHERITANCE00_CHECKEDTOKENSRESULTS_H
#define INHERITANCE00_CHECKEDTOKENSRESULTS_H

#include "TokensVector/TokensVector.h"

using namespace std;

class CheckedTokensResults {
public:
    CheckedTokensResults(TokensVector *tokens);

public:

    bool correct();

private:
    TokensVector *tokens;

    bool correctSyntax();

    bool correctBrackets();

};

#endif //INHERITANCE00_CHECKEDTOKENSRESULTS_H
