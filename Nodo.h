//
// Created by 50683 on 9/18/2022.
//

#ifndef PROYECTO_ESTRUCTURAS_NODO_H
#define PROYECTO_ESTRUCTURAS_NODO_H


class Nodo {

private:

    int* data;
    Nodo* previous;
    Nodo* next;

public:

    Nodo();
    ~Nodo();
    Nodo* getPrevious();
    Nodo* getNext();
    int* getData();
    void setPrevious(Nodo*);
    void setNext(Nodo*);
    void setData(int*);



};


#endif //PROYECTO_ESTRUCTURAS_NODO_H
