//
// Created by 50685 on 9/21/2022.
//

#ifndef PROYECTO_ESTRUCTURAS_ARRAY_H
#define PROYECTO_ESTRUCTURAS_ARRAY_H

#include <string>
using namespace  std;

#include <sstream>
class Array{

private:

    int** array;
    const int tam=3;
    int cant;

public:

    Array();
    ~Array();
    void add(int*);
    string toString();
    const int max_elements();
    int* operator [](unsigned  int)const;


};



#endif //PROYECTO_ESTRUCTURAS_ARRAY_H
