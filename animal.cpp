#include "animal.h"

iAnimal::iAnimal(int price, bool isCarnivor, float eatQuantity, int dayBeforeHunger, bool isSick, float habitatPriceBuy, float habitatPriceSell){
    _price = price;
    _isCarnivor = isCarnivor;
    _eatQuantity = eatQuantity;
    _dayBeforHunger = dayBeforeHunger;
    _isSick = isSick;
    _habitatPriceBuy = habitatPriceBuy;
    _habitatPriceSell = habitatPriceSell;
}