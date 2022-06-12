#ifndef AIGLE_H
#define AIGLE_H
#include "animal.h"

class Eagle: public iAnimal{
public:
    Eagle(int price): iAnimal(1000, false, 0.3, 10, false){};
    
};

#endif