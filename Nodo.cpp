//
// Created by 50683 on 9/18/2022.
//

#include "Nodo.h"


Nodo::Nodo() {



}

int* Nodo::getData() { return data; }

Nodo* Nodo::getNext() { return next; }

Nodo* Nodo::getPrevious() { return previous; }

void Nodo::setData(int* data) { this->data = data; }

void Nodo::setNext(Nodo* next) { this->next = next; }

void Nodo::setPrevious(Nodo* previous) { this->previous = previous; }

Nodo::~Nodo() {}