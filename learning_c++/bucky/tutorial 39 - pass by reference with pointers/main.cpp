/*
pass by value:
    is what I am acustomed to according to bucky
    for example:
        sqrt(81)
            81 is consideed a pass by value
    We pass a copy of that variable into the function so the
    original varibale itself; cannot be changed until we set it equal toa nother value so that
    way the function has access to the copy of that variable not the original itself.

    in.short: passing in the copy

pass by reference:
    whenever you pass in a variable by reference, you pass in the 
    variables address. Whenever we do this, we give the function direct acess to that variable.
    The ORIGINAL variable can be modified inside your

why:
    - It causes less stress on the computer
    - If we pass 100,000 variables, it dont have to make Nth ammount of copies with reference.
*/
#include <iostream>
using namespace std;

void passByValue(int x);
void passByReference(int *x);

int main()
{
    int betty= 13; // pass by value
    int sandy= 13; // pass by reference

    passByValue(betty);
    passByReference(&sandy); //give the addy

    cout<< "betty is now "<< betty<< endl;
    cout<< "sandy is now "<< sandy<< endl;
    
}

void passByValue(int x){ // x is a copy of betty, it DONT set betty to 99 but it sets x(copy) to 99
    x= 99;
}

void passByReference(int *x){ // need to have a *P argument because we need the address [0x...]
    *x= 66;                  // we are passing sandy DIRECTLY into this x 
}