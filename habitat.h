#ifndef HABITAT_H
#define HABITAT_H
#include "zoo.h"

class Habitat: public Zoo{
public:
    private:
    int _priceBuy;
    int _priceSell;
    int _capacity;
public:
    Habitat(int priceBuy, int priceSell, int capacity);
};

#endif