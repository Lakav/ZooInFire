#ifndef POULE_H
#define POULE_H
#include "animal.h"

class Chicken: public iAnimal{
public:
    Chicken(int price): iAnimal(50, false, 0.15, 1, false);
    
};


#endif
