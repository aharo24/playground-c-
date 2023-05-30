#include "Sally.h"
#include <iostream>
using namespace std;

Sally::Sally()
{}

Sally::Sally(int a)
{
    this->num= a;
}

// tis the magical func 
Sally Sally::operator+(Sally aso){
    Sally brandNew;
    brandNew.num= num+ aso.num; // a+b

    return(brandNew); // c= 
}

