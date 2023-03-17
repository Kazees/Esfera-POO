#ifndef ESFERA_H
#define ESFERA_H
#include <stdexcept>

using std::invalid_argument;

class Esfera
{
    private:
        float raio;
    public:
    Esfera(float raio);

    void setRaio(float raio);

    float getRaio()const {return raio;}

    float calcularArea()const {return 4*3.1415*(raio*raio);}
    float calcularVolume()const {return (4.0/3)*3.1415*(raio*raio*raio);}
};

#endif