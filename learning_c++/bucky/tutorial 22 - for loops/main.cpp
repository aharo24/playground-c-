/*
for:
    starting | ending value | how much to increment/decrement

++x <==> x+= 1
*/
#include <iostream>
using namespace std;

int main()
{
    /*
    for (int x= 1; x< 10; ++x)
    {
        cout<< x<< endl;
    }
    */

    for (int x= 5; x< 50; x+= 5)    // ++ by 5
    {
        cout<< x<< endl;
    }

}