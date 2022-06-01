class zoo{
    //atributs
    private:

    //methodes
    public:

    //constructeurs
};


class animal: public zoo{
    private:

    public:
};

class tigre: public animal{
    private:
        int nombreDeTigre;
        bool sousNutrition;
        bool malade;
    public:
};
class sexTigre: public tigre{
    private:
        bool malOuFemelle;
};
class habitat: public tigre{
    private:

    public:

};


class aigle: public animal{
    private:
        int nombreDAigle;
        bool sousNutrition;
        bool malade;
    public:
};
class sexAigle: public aigle{
    private:
        bool malOuFemelle;
};
class habitat: public aigle{

    private:

    public:

};


class poule: public animal{
    private:
        int nombreDePoule;
        bool sousNutrition;
        bool malade;
        
    public:
};
class sexPoule: public poule{
    private:
        bool malOuFemelle;
};
class habitat: public poule{

    private:

    public:

};