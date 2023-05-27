/*

*/
#include <iostream>
using namespace std;

void printArray(int theArray[], int sizeOfArray); // Prototype

int main()
{
    int bucky[3]= {20,54,675};
    int jessica[6]= {54,24,7,8,9,99};

    printArray(bucky,3); // we dont pass [] because it knows
    cout<<"---------\n";
    printArray(jessica,6); // we dont pass [] because it knows


}

void printArray(int theArray[], int sizeOfArray){
    for(int x=0; x < sizeOfArray; ++x){
        cout<< theArray[x]<< endl;
    }

}