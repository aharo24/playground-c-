/*
const --> it never chages
you dont want them to change 

*/
#include "Sally.h"
#include <iostream>
using namespace std;

int main()
{
    const int x= 3;
    x= 5;

    cout<< x<< endl; 

}