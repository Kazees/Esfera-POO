#include "Esfera.h"

void Esfera::setRaio(float raio)
{
    if(raio<0)
    {
        throw invalid_argument("Valor tem que ser maior ou igual a zero");
    }

    this->raio=raio;
}

Esfera::Esfera(float raio)
{
    setRaio(raio);
}