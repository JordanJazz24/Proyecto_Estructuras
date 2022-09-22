//
// Created by 50683 on 9/18/2022.
//

#ifndef PROYECTO_ESTRUCTURAS_LISTA_H
#define PROYECTO_ESTRUCTURAS_LISTA_H
#include "Nodo.h"
#include <string>
#include <sstream>
using namespace  std;

class Lista {

private:

    Nodo* first;
    Nodo* last;

public:

    Lista();
    void add(Nodo*, int*);
    void addFirst(int*);
    void addEnd(int*);
    string toString();
};


#endif //PROYECTO_ESTRUCTURAS_LISTA_H
