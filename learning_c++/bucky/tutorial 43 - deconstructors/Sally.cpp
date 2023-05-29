/*
Deconstructor:
    - NEVER has any parameters.
    - NEVER has a return value.
    - NO even a Void return.
    - NO overloading the deconstructor 
    - Once everything from our program... at the very end the decostructor gets called
*/
#include "Sally.h"
#include <iostream>

using namespace std;

Sally::Sally()
{
    cout<< "I am the constructor!"<< endl;
}

Sally::~Sally(){
    cout<< "I am the deconstructor!!!"<< endl;
}
