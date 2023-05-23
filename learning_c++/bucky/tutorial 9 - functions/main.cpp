#include <iostream>
using namespace std;
void printSomething();
/*
A program is just a bunch of functions stacked on each other 

() --> Parameters / Arguments
return 
    - void 
    -
    -
    -
call the functions means --> use functions [name]
function prototype --> include the functions name at the very Very top.

*/

/*
THIS ORDER WILL FIX the future but NOT optimal!!!
void printSomething() {
    cout<< "oohhh I am text on screen" <<endl;
}
*/

int main()
{
    printSomething(); // error: main.cpp:18:5: error: use of undeclared identifier 'printSomething' FIX: Computer reads from top-to-bottom so it has not reached the scoop below 

    return 0;
}


void printSomething() {
    cout<< "oohhh I am text on screen" <<endl;
}