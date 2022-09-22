//
// Created by 50683 on 9/18/2022.
//

#include "Lista.h"

Lista::Lista() {

    first = new Nodo();
    last = new Nodo();
    first->setNext(last);
    last->setPrevious(first);

}

void Lista::add(Nodo* aux, int* number) {

    Nodo* nuevo = new Nodo();
    nuevo->setData(number);
    nuevo->setPrevious(aux->getPrevious());
    nuevo->setNext(aux);
    aux->getPrevious()->setNext(nuevo);
    aux->setPrevious(nuevo);


}

void Lista::addFirst(int* number) {

    add(first->getNext(), number);
}

void Lista::addEnd(int* number) {

    add(last, number);
}

string Lista::toString() {

    stringstream  s;
    Nodo* aux = first->getNext();

    if (aux == last) {

        s << "\nLista vacia";
    }
    else {

        while (aux != last) {
            s << *aux->getData() << "\n";
            aux = aux->getNext();

        }
    }
    return s.str();

}

