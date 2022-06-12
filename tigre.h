#ifndef TIGRE_H
#define TIGRE_H
#include "animal.h"

class Tiger: public iAnimal{
public:
    Tiger(int price): iAnimal(3000, true, 12.0, 2, false, 2000, 500){};

};

#endif