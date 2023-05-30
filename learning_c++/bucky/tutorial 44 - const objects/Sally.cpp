#include "Sally.h"
#include <iostream>
using namespace std;

Sally::Sally()
{

}

void Sally::printShiz(){
    cout<< "I am a regular function"<< endl;
}

// correct way to use a constant function
void Sally::printShiz2() const {
    cout<< "I am the constant function"<< endl;
}