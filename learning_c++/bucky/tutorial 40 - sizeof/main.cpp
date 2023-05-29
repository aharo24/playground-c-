/*
sizeof --> checks the byte memory
char --> "c" --> 1 byte
int --> 4 bytes
double --> more precise --> 8 bytes
the more Precise, the more memory it takes up.
*/
#include <iostream>
using namespace std;

int main()
{
    double bucky[10]; // 8bytes * 10 = 80 bytes
    cout<< sizeof(bucky)<< endl;

    cout<< sizeof(bucky) / sizeof(bucky[0])<< endl; // if we want the size of our array/elements
}