/*
-> 


*/
#include <iostream>
// #include "Sally.h"
using namespace std;

int main()
{
    Sally sallyObject;
    Sally *sallyPointer= &sallyObject;
    
    sallyObject.printCrap();
    
    sallyPointer->printCrap(); // instead of a . we do -> to acess 
}