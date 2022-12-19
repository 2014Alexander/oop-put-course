//
// Created by PC on 14.12.2022.
//

#ifndef INHERITANCE00_OPERATIONPRIORITY_H
#define INHERITANCE00_OPERATIONPRIORITY_H


#include <string>
#include <map>
#include "../Types/Name.h"

using namespace std;

class OperationPriority {
public:
    OperationPriority();

    OperationPriority(Name name);

public:
    int priority();

private:
    Name name;
    static map<Name, int> priorityMap;
};


#endif //INHERITANCE00_OPERATIONPRIORITY_H
