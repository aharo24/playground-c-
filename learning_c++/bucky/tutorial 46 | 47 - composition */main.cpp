/*
composition:
    - memebers
    - functions
    - objects inside another class (not just in main.cpp)
    - I think its when another class just has the psvm (java)
members:
    - AKA variables 
*/
#include "Birthday.h"
#include "People.h"
#include <iostream>
using namespace std;

int main()
{
    Birthday birthObject(12,28,1986);

    People buckyRoberts("Bucky the King", birthObject);
    buckyRoberts.printInfo();


}