/*
l --> param{1}
w --> param{2}
h --> param{3}

volume( {1},{2},{3} );
*/

#include <iostream>
using namespace std;

int volume(int l=1, int w=1, int h=1);  // dvc | function prototype!?!

int main()
{
    //cout<< volume(4,5,5);
    cout<< volume();

}

int volume(int l, int w, int h){
    return l*w*h;

}