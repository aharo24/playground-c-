#include <iostream>

using namespace std;
/*
every var value holds a memory location;

*/
int main()
{
    int tuna= 54;

    // int tuna=2; --> memory error 
    
    tuna= 2; // overwrites the memory old value to the newer 

    cout<< tuna;

    return 0;
}