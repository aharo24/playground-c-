/*
if a class wants to borrow a function of another class, 
it can just borrow it

use keyword 'friend' to get acess to the classes members and stuff.
you cant force a friend to be a friend, they have to accept you.

-- "A class has to give away it's friendship, the other one can't demand it"
*/
#include <iostream>
using namespace std;

class StankFist{
    public:
        StankFist(){stinkyVar= 0;}
    private:
        int stinkyVar;
    
    friend void stinkysFriend(StankFist &sfo);
};

void stinkysFriend(StankFist &sfo){
    sfo.stinkyVar= 99;
    cout<< sfo.stinkyVar<< endl;
}

int main()
{
    StankFist bob;
    stinkysFriend(bob);

}