#include "Sally.h"
#include <iostream>
using namespace std;

Sally::Sally(int a, int b)
: regVar(a), constVar(b) // DONT do a ';' | not a statement 
{
}

void Sally::print(){
    cout<< "regular var is: "<< regVar<< " const variable is: "<< constVar<< endl;
}