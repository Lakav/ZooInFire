#ifndef TIGRE_H
#define TIGRE_H
#include "animal.h"

class Tiger: public iAnimal{
public:
    Tiger(int price): iAnimal(3000, true, 12, 2, false);

};

#endif