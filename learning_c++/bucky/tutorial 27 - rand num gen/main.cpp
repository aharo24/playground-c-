/*
// <> are .H files?
for dice:
    %7 --> dont work
    1+(rand()%6) --> Works 

srand --> changes algo
time --> based of seconds since like 1920 or sum like that x_x
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    srand(67); // changes the algorithm
    srand(time(0)); // changes the algorithm
    for (int x= 1; x<25; ++x){
        //cout<< rand()<< endl; // big O numbersss
        cout<< 1+(rand()%6) << endl; 

    }
}