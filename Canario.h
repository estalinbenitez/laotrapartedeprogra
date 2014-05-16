#ifndef CANARIO_H
#define CANARIO_H
#include "Animal.h"
#include <iostream>
using namespace std;

class Canario: public Animal
{
    public:
        Canario(int edad,string nombre);
        void rugir();
        virtual ~Canario();
    protected:
    private:
};

#endif // CANARIO_H
