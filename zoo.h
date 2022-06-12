#ifndef ZOO_H
#define ZOO_H


class Zoo{
protected:
    float _wallet;
    void buyTiger();
    void buyEagle();
    void buyChicken();
    void sellTiger();
    void sellEagle();
    void sellChicken();
    void killTiger();
    void killEagle();
    void killchicken();
    void eat();
    void isHungry();
    void buyMeat();
    void buySeed();
    void buyTigerHouse();
    void buyEagleHouse();
    void buyChickenHouse();
    void sellTigerHouse();
    void sellEagleHouse();
    void sellChickenHouse();
    void becomeSick();
    void visitorPays();
    void subventions();
    void inFire();
    void theft();
    void pest();
    void spoiledMeat();
    void time();
    void nextMonth();

public:
    Zoo(float wallet);
};
#endif