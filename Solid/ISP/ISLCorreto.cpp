class Marca{
    virtual void dizerMazda() = 0;
};

class Honda : public Marca{
    virtual void honda() = 0;

};

class Mazda : public Marca{
    virtual void mazda() = 0;
};

class Toyota : public Marca{
    virtual void toyota() = 0;
};

class CarroHonda : public Honda{
    void dizerMarca(){
        std::cout << "Sou da Honda" << std::endl;
    }

    void honda(){
        std::cout << "Fui fundada pelo Soichiro Honda" << std::endl;
    }

};


