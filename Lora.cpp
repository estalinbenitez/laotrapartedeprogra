#include "Lora.h"

Lora::Lora(int edad,string nombre)
{
    this->tipo="Lora";
    this->edad=edad;
    this->nombre=nombre;
}

Lora::~Lora()
{
    //dtor
}

void Lora::rugir(){

    cout<<"Urra Urra"<<endl;

}
