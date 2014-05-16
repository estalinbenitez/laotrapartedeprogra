#include "Lista.h"

Lista::Lista()
{
    inicio=NULL;



}

Lista::~Lista()
{
    //dtor
}


//Funcion que agrega ah la lista

void Lista::agregar(Animal* animalito){

    if(inicio!=NULL){
            Animal*temp=inicio;
            while(temp->sig!=NULL){
                temp=temp->sig;
            }
                temp->sig=animalito;
        }else{
            inicio=animalito;
        }


}
//Funcion Imprimir
void Lista::imprimir(){

    Animal*tmp=inicio;
    while(tmp!=NULL){
        cout<<tmp->tipo<<" "<<tmp->edad<<" "<<tmp->nombre<<" "<<endl;
        tmp=tmp->sig;
    }
}

void Lista::escribir(){

    write.open("Listas.txt");

    cout<<"Escribiendo Datos en Archivo"<<endl;
    Animal*tmp=inicio;
     while(tmp!=NULL){
    write<<tmp->tipo<<" "<<tmp->edad<<" "<<tmp->nombre<<" "<<endl;

        tmp=tmp->sig;
    }

    write.close();
}

void Lista::leer(){
    read.open("Listas.txt");

    cout<<"Leyendo Lista Del Archivo"<<endl;
    string str;
    string edad;
    string nombre;

    read.seekg(0);

    while(read>>str>>edad>>nombre){

        int e=atoi(edad.c_str());


        if(str=="Perro")
            agregar(new Perro(e,nombre));
        if(str=="Canario")
            agregar(new Canario(e,nombre));
        if(str=="Lora")
            agregar(new Lora(e,nombre));


    }


    read.close();
}

Animal* Lista::getAnimalMasViejo()
{
    if(inicio == NULL){
    return NULL;
    }
    Animal * tmp = inicio;
    Animal* n = tmp;
    while(tmp!=NULL){
        if(tmp->edad>n->edad)
{
    n = tmp;
}
tmp = tmp->sig;
    }
    return n;

}
Animal* Lista::getAnimalMasJoven()
{
    if(inicio == NULL){
    return NULL;
    }
    Animal * tmp = inicio;
    Animal* n = tmp;
    while(tmp!=NULL){
        if(tmp->edad<n->edad)
{
    n = tmp;
}
tmp = tmp->sig;
    }
    return n;

}

Animal* Lista::buscar(string nombre){

    if (inicio == NULL)
        {
            return NULL;
        }
     Animal* temp = inicio;

     while(temp != NULL){
        if(temp-> nombre == nombre){
            return temp;
        }
            temp = temp ->sig;
            cout<< "Animal no Existe";
            return NULL;
     }
   }
void Lista::insertar(Animal*animal , int posicion ){

    if(posicion == 0){

    Animal *tmp = animal;
    tmp->sig = inicio;
    inicio = tmp;
    return ;
    }
     Animal*temp = inicio;

        for(int i= 1; i < posicion; i++){

        if(temp->sig == NULL){
        temp->sig = animal;
        return;
        }
            temp = temp->sig;
        }

        animal-> sig = temp -> sig;
        temp -> sig = animal;


}


void Lista::Borrar(string nom){

  if(inicio != NULL){
            if(inicio->nombre==nom){
                inicio = inicio->sig;
            }
            else{
                Animal*tmp = inicio;
                while(tmp->sig!= NULL){
                    if(tmp->sig->nombre==nom){
                        tmp->sig= tmp->sig->sig;
                    }
                    else
                        tmp = tmp->sig;
                }
            }
        }
}

double Lista::promedio(){
    if(inicio==NULL){
        return 0 ;
    }
    double suma=0;
    double cant=0;

    Animal *tmp =inicio;

    while(tmp!=NULL){
        suma+=tmp->edad;
        cant+=1;
        tmp= tmp->sig;
    }

    return (suma/cant);


}





