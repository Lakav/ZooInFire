#include "animal.h"

iAnimal::iAnimal(int price, bool isCarnivor, float eatQuantity, int dayBeforeHunger, bool isSick, float habitatPriceBuy, float habitatPriceSell, int habitatCapacity){
    _price = price;
    _isCarnivor = isCarnivor;
    _eatQuantity = eatQuantity;
    _dayBeforHunger = dayBeforeHunger;
    _isSick = isSick;
    _habitatPriceBuy = habitatPriceBuy;
    _habitatPriceSell = habitatPriceSell;
    _habitatCapacity = habitatCapacity;
}