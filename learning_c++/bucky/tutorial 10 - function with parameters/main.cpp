#include <iostream>
using namespace std;
// void printCrap(); ERROR cuz we need the int x argument 
void printCrap(int x);

/*
data | var_name

*/

int main()
{
    printCrap(3);

    return 0;
} 

void printCrap(int x){
    cout<< "angel fav number is: " <<x <<endl;

}