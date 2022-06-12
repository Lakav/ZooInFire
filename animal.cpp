#include "animal.h"

iAnimal::iAnimal(int price, bool isCarnivor, float eatQuantity, int dayBeforeHunger, bool isSick){
    _price = price;
    _isCarnivor = isCarnivor;
    _eatQuantity = eatQuantity;
    _dayBeforHunger = dayBeforeHunger;
    _isSick = isSick;
}