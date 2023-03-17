#include <iostream>
#include <iomanip>
#include "Esfera.h"
#include "Esfera.cpp"

using namespace std;

int main()
{
    float raio;
    bool conti=true;

    while(conti)
    {
        cout<<"Digite um valor para o raio: ";
        cin>>raio;

        try
        {
            Esfera n1(raio);
            cout<<fixed<<setprecision(2);
            cout<<"Valor da Area total: "<<n1.calcularArea()<<endl;
            cout<<"Valor do volume da esfera: "<<n1.calcularVolume()<<endl;
            conti=false;
        }

        catch(invalid_argument &e)
        {
            cout<<"Erro:"<<e.what()<<endl;
            conti=true;
        }
    }

    return 0;
}