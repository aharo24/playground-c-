/*
const --> it never chages
you dont want them to change 

    - A constant object can not call a function that is not constant, 
    BUT a regular object can call a constant function.


*/
#include "Sally.h"
#include <iostream>
using namespace std;

int main()
{
    Sally salObj;
    salObj.printShiz();

    const Sally constObj;
    constObj.printShiz2();
}