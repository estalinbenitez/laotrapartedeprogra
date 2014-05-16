#include "Perro.h"

Perro::Perro(int edad, string nombre)
{
    this->tipo="Perro";
    this->edad=edad;
    this->nombre=nombre;
}

Perro::~Perro()
{
    //dtor
}

void Perro::rugir(){
    cout<<"Gua Gua"<<endl;
}

void Perro::volar(){
    cout<<"No puedo Volar"<<endl;
}
