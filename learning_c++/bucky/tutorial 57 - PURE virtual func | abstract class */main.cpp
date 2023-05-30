/*
PURE virtual:
    - virtual void attack() NO {} --> PURE Virtual func
    - the derived MUST @override
*/
#include <iostream>
using namespace std;

// Abstract class
class Enemy {
public:
    // Pure virtual function, making this class abstract
    virtual void attack() = 0;
};

class Ninja: public Enemy{
    public:
        void attack(){
            cout<< "ninja attack!" <<endl;
        }
};

class Monster: public Enemy{
    public:
        // when empty, it does the DVC 
};


int main() {
    Ninja n;
    Monster m;
    Enemy *enemy1= &n;
    Enemy *enemy2= &m;

    enemy1->attack();
    enemy2->attack();
}

