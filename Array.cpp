//
// Created by 50685 on 9/21/2022.
//
#include "Array.h"

Array::Array() :array(new int*[cant]) {

    cant=0;

for(int i=0;i<cant;i++){

    array[i]= nullptr;
}

}

void Array::add(int *num) {

    if(cant<tam){

        array[cant]=num;
    }


}

const int Array::max_elements()  {

    return cant;
}

int* Array::operator[](unsigned int i) const {

    return array[i];
}

Array::~Array() {

    for(int i=0;i<cant;i++){

        delete array[i];
    }

    delete[] array;
}

