#ifndef ANIMAL_H
#define ANIMAL_H
#include "zoo.h"

class iAnimal{
protected:
    int _price;
    bool _isCarnivor;
    float _eatQuantity;
    int _dayBeforHunger;
    bool _isSick;
    float _habitatPriceBuy;
    float _habitatPriceSell;
    int _habitatCapacity;

public:
    iAnimal(int price, bool isCarnivor, float eatQuantity, int dayBeforeHunger, bool isSick, float habitatPriceBuy,float habitatPriceSell, int habitatCapacity);

};

#endif