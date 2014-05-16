#include "Animal.h"

Animal::Animal()
{
this->sig=NULL;

}
Animal::Animal(int edad,string nombre){
    this->edad=edad;
    this->nombre=nombre;
    this->tipo="N/D";
}

Animal::~Animal()
{
    //dtor
}

void Animal::imprimir(){

    cout<<tipo<<endl;
    cout<<"Edad: "<<edad<<endl;
    cout<<"Nombre: "<<nombre<<endl;


}

void Animal::volar(){

cout<<"Estoy Volando"<<endl;


}

