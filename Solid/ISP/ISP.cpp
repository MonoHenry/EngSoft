class Marca{
    virtual void dizerMarca() = 0;
    virtual void honda() = 0;
    virtual void mazda() = 0;
    virtual void toyota() = 0;


};

class Honda : public Marca{
    void dizerMarca(){
        std::cout << "Sou da Honda" << std::endl; 
    }


    void honda(){
        std::cout << "Fui fundada pelo Soichiro Honda" << std::endl;
    }

    void mazda(){
        std::cout << "Fui fundada pelo Jujiro Matsuray" << std::endl;
    }

    void toyota(){
        std::cout << "Fui fundada pelo Sakichi Toyoda" << std::endl;
    }

};


