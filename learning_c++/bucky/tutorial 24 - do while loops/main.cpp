/*
- it ENSURES it runs your code atleast 1 time
- Usually for GUI/interface for i/o stuff
*/

#include <iostream>
using namespace std;

int main()
{
    int x= 1;

    do{
        cout<< x<< endl;
        ++x;
    } while(x<10);

    return 0;
}