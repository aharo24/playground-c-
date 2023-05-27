/*
base case:
    ending point for your func.


*/
#include <iostream>
using namespace std;

int factorialFinder(int x){
    if (x==1){          //base case
        return 1;
    }else{
        return x*factorialFinder(x-1); //logic
    }
} 

int main()
{
    cout<< factorialFinder(5);


}