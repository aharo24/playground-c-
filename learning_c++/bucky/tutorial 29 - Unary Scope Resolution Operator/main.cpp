/*
g vs l 
l --> are greedy
g --> open book
when we use a global inside our local function, 
it will Always choose the local value.
Unary Scope Resolution Operator --> ::

::tuna --> use G 
tuna --> use L
*/

#include <iostream>
using namespace std;

int tuna= 69;

int main()
{
    int tuna= 20; 
    cout<< ::tuna<< endl;
}
