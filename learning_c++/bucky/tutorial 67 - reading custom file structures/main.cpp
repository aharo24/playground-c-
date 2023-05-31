/*
ifstream --> reading file in 

filePtr:
    - it starts at the very beginning
    - C++ knows when to end  
*/
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream theFile("players.txt");
    // deconstructor ifstream will theFile.close() // pretty cool huh (:

    int id;
    string name;
    double money;

    while(theFile>> id>> name>> money) {
        cout<< id<< ", "<<  name<< ", " <<money<<endl;

    }
}