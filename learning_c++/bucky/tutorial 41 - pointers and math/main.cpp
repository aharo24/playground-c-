/* 

OUTPUT:
    Always 4 bites away
    bp0 is at 0x7ff7b1516010  --> 10
    bp1 is at 0x7ff7b1516014  --> 14
    bp2 is at 0x7ff7b1516018  --> 18

whenever you are working with pointers, you are not
changing the memory address, you are only changing 
element that it point to.
*/
#include <iostream>
using namespace std;

int main()
{
    int bucky[5];
    int *bp0= &bucky[0];
    int *bp1= &bucky[1];
    int *bp2= &bucky[2];

    cout<< "bp0 is at "<< bp0<< endl;
    cout<< "bp1 is at "<< bp1<< endl;
    cout<< "bp2 is at "<< bp2<< endl;

    bp0+= 2;
    cout<< "bp0 is now at"<< bp0<< endl;
    // bp0 is now at0x7ff7b7866018 because 2 int --> 8 bites soo 10+8= 18

}