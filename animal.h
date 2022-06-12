#ifndef ANIMAL_H
#define ANIMAL_H
#include "zoo.h"

class iAnimal: public Zoo{
protected:
    int _price;
    bool _isCarnivor;
    float _eatQuantity;
    int _dayBeforHunger;
    bool _isSick;


public:
    iAnimal(int price, bool isCarnivor, float eatQuantity, int dayBeforeHunger, bool isSick);

};

#endif