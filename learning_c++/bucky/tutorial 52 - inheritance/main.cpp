/*
inherit thing from another
Base class:
    the mother/father.
Derived class:
    the child.

example:
    - ': to inherit'
    - class Daughter: public Mother

*/
#include <iostream>
#include "Mother.h"
#include "Daughter.h"
using namespace std;

int main()
{
    Mother mom;
    mom.sayName();

    Daughter tina;
    tina.sayName();

}