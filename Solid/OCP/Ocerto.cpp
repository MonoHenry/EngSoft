class CalcularCavalariaPorPeso{

    virtual float calcularCavalariaPorPeso(Carro) = 0;


};



class CalcularCivic : public CalcularCavalariaPorPeso{

    float calcularCavalariaPorPeso(Carro civic){
        return civic.cavalaria/civic.peso;
    }

};

class CalcularCorvette : public CalcularCavalariaPorPeso{

    float calcularCavalariaPorPeso(Carro corvette){
        return corvette.cavalaria/corvette.peso
    }

};


