class Automovel2Rodas{

    virtual void ligar() = 0;
    virtual void desligar() = 0;
    virtual void empinar() = 0;

};

class AutomovelMais2Rodas{
    virtual void ligar() = 0;
    virtual void desligar() = 0;

};

class Carro : public AutomovelMais2Rodas{
    
    void ligar(){
        //algum código
    }

    void acelerar(){
        //algum código
    }

};


class Moto : public Automovel2Rodas{

    void ligar(){
        //algum código
    }

    void acelerar(){
        //algum código
    }

    void empinar(){
        //algum código
    }


};


