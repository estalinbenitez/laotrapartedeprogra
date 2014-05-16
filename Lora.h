#ifndef LORA_H
#define LORA_H
#include "Animal.h"
#include <iostream>
using namespace std;

class Lora: public Animal
{
    public:
        Lora(int edad,string nombre);
        void rugir();
        virtual ~Lora();
    protected:
    private:
};

#endif // LORA_H
