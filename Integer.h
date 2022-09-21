//
// Created by 50683 on 9/18/2022.
//

#ifndef PROYECTO_ESTRUCTURAS_INTEGER_H
#define PROYECTO_ESTRUCTURAS_INTEGER_H


#include <bits/stdc++.h>

using namespace std;

class Integer{
    string digits;
public:

    //Constructors:
    Integer(unsigned long long n = 0);
    Integer(string &);
    Integer(const char *);
    Integer(Integer &);

    const string &getDigits() const;

    //Helper Functions:
    friend void divide_by_2(Integer &a);
    friend bool Null(const Integer &);
    friend int Length(const Integer &);
    int operator[](const int)const;

    /* * * * Operator Overloading * * * */

    //Direct assignment
    Integer &operator=(const Integer &);

    //Post/Pre - Incrementation
    Integer &operator++();
    Integer operator++(int temp);
    Integer &operator--();
    Integer operator--(int temp);

    //Addition and Subtraction
    friend Integer &operator+=(Integer &, const Integer &);
    friend Integer operator+(const Integer &, const Integer &);
    friend Integer operator-(const Integer &, const Integer &);
    friend Integer &operator-=(Integer &, const Integer &);

    //Comparison operators
    friend bool operator==(const Integer &, const Integer &);
    friend bool operator!=(const Integer &, const Integer &);

    friend bool operator>(const Integer &, const Integer &);
    friend bool operator>=(const Integer &, const Integer &);
    friend bool operator<(const Integer &, const Integer &);
    friend bool operator<=(const Integer &, const Integer &);

    //Multiplication and Division
    friend Integer &operator*=(Integer &, const Integer &);
    friend Integer operator*(const Integer &, const Integer &);
    friend Integer &operator/=(Integer &, const Integer &);
    friend Integer operator/(const Integer &, const Integer &);

    //Modulo
    friend Integer operator%(const Integer &, const Integer &);
    friend Integer &operator%=(Integer &, const Integer &);

    //Power Function
    friend Integer &operator^=(Integer &,const Integer &);
    friend Integer operator^(Integer &, const Integer &);

    //Square Root Function
    friend Integer sqrt(Integer &a);

    //Read and Write
    friend ostream &operator<<(ostream &,const Integer &);
    friend istream &operator>>(istream &, Integer &);

    //Others
    friend Integer NthCatalan(int n);
    friend Integer NthFibonacci(int n);
    friend Integer Factorial(int n);
};


#endif //PROYECTO_ESTRUCTURAS_INTEGER_H
