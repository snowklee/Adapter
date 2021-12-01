#ifndef WILDTURKEY_H
#define WILDTURKEY_H

#include <iostream>
#include "turkey.h"

using namespace std;

class WildTurkey : public Turkey {
public:
    WildTurkey();
    void gobble();
    void fly();

};
#endif
