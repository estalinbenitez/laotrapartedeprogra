#ifndef PERRO_H
#define PERRO_H
#include "Animal.h"
#include <iostream>
using namespace std;


class Perro : public Animal
{
    public:
        Perro(int edad,string nombre);
        void rugir();
        void volar();
        virtual ~Perro();
    protected:
    private:
};

#endif // PERRO_H
