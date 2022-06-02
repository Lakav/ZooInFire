#ifndef ZOO_H
#define ZOO_H

#include "animal.h"
#include "tigre.h"
#include "aigle.h"
#include "poule.h"
#include "habitat.h"

class Zoo{
    //atributs
    private:   
        Tiger* arrayOfTiger;
        Eagle* arrayOfEagle;
        Chicken* arrayOfChicken;
        int money;
        int numberOfTiger;
        int numberOfEagle;
        int numberOfChicken;

    //methodes
    public:
        Zoo();
};
#endif