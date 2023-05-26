/*
skipped tutorial
&&
||
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int age= 23;
    int money= 650;
/*
not so good:
    if(age>21){
        if(money>500){
            cout<< "you are allowed on";
        }
    }
*/

    if(age>21 && money > 500) {
        cout<< "you are allowed in!"<< endl;

    }
    return 0;
}