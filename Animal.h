#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
using namespace std;

class Animal
{
    public:
        Animal*sig;
        string tipo;
        int edad;
        string nombre;
        Animal(int edad,string nombre);
        Animal();
        void imprimir();
        virtual void volar();
        virtual void rugir()=0;


        virtual ~Animal();
    protected:
    private:
};

#endif // ANIMAL_H
