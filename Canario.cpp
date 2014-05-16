#include "Canario.h"

Canario::Canario(int edad,string nombre)
{
    this->tipo="Canario";
    this->edad=edad;
    this->nombre=nombre;

}

Canario::~Canario()
{
    //dtor
}

void Canario::rugir(){
    cout<<"Pio Pio"<<endl;

}
