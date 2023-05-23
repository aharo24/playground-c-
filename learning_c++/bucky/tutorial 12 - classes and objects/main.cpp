#include <iostream>
/*
SUPER IMPORTANT TUTORIAL 
creating a class <=> declaring a class [school]
public: --> allows everyone to use 
access specifier [school]
object is how you access stuff inside your class
. --> seperator 
*/
using namespace std;

class AngelsClass{
    public:
        void coolSaying(){
            cout<< "preaching to the choir"<< endl;
        }
};

int main()
{
    AngelsClass angelsObject;
    angelsObject.coolSaying();
    return 0;
}