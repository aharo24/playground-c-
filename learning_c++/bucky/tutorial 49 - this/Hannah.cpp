/*
'->' --> is a Pointer
'this' --> stores the adress of the current Object you are working with
(*this) --> deferencing a ptr
    - without using 'this' is implicitly referencing the attribute but this can cause issues 
    if you have a function parameter that has the same name as the variable, eg. setting h to 
    the value of a parameter called h:  h = h;

    - this-> is explicitly referencing the attribute and it's the least prone to errors and 
    it's easier for the programmers to read. Also, it avoids the previous potential problem by doing this->h = h;

    - (*this).h has no difference between the previous one. This one is more tedious to type 
    out, so "this->h" is a short-hand notation for (*this).h
*/
#include "Hannah.h"
#include <iostream>
using namespace std;

Hannah::Hannah(int num)
:h (num)
{

}

void Hannah::printCrap(){
    cout<< "h=" << h<<endl;
    cout<< "this->h=" << this->h<<endl;
    cout<< "(*this) .h=" << (*this).h<<endl;
}
