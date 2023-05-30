/*
operator overloading allows you to change the way they are used

'operator' --> keyword
*/
#include <iostream>
#include "Sally.h"
using namespace std;

int main()
{
    Sally a(34);
    Sally b(21);
    Sally c;

    // c.num= a.add(b); EXAMPLE of how we did it before.
    c=a+b;
    cout<< c.num<< endl;
}