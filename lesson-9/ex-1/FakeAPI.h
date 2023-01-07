//
// Created by PC on 07.01.2023.
//

#ifndef PO_LESSON9_FAKEAPI_H
#define PO_LESSON9_FAKEAPI_H


#include "API.h"

class FakeAPI : public API {
    int result() override;
};

int FakeAPI::result() {
    return 777;
}


#endif //PO_LESSON9_FAKEAPI_H
