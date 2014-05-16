#include <iostream>
#include "Animal.h"
#include "Perro.h"
#include "Lora.h"
#include "Canario.h"
#include "Lista.h"
#include <vector>

using namespace std;

int main()
{

 vector<Animal*>animal;
    animal.push_back(new Perro(50,"Ho"));
    animal.push_back(new Canario(105,"ll"));
    animal.push_back(new Lora(45,"jj"));


    for(int i = 0; i<animal.size() ; i++){
       animal[i]->imprimir();
       animal[i]->rugir();
       animal[i]->volar();

    }

    Lista l;
    l.imprimir();
    l.leer();
    l.imprimir();


    l.buscar("Ho");
     l.imprimir();
}
