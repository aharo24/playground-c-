/*
------------------------------------------------------------------------------------
Ninja n; //Creates a ninja enemy
n.setAttackPower(29) //Sets damage
n.attack // Applies damage

That code would work, but, when you are programming, you want your code to be fast, 
and efficient. Pointers are faster, because of how they are used in the computer.
------------------------------------------------------------------------------------
Ninja n; //Creates a ninja enemy
Ninja *np = &n //Creates pointer to ninja enemy
np->setAttackPower(29) //Sets damage
np->attack // Applies damage

That's all well and good, but why do we have to get the enemy class involved?
------------------------------------------------------------------------------------
Ninja n; //Creates a ninja enemy
Enemy *e = &n //Pointer stuff
e->setAttackPower(29) //Sets damage
n.attack // Applies damage
------------------------------------------------------------------------------------
*/
#include <iostream>
using namespace std;

class Enemy{
    protected:
        int attackPower;
    public:
        void setAttackPower(int a){
            this->attackPower=a;
        }
};

class Ninja: public Enemy{
    public:
        void attack()
        {cout<< "i am a ninja, ninja chop! = -" <<attackPower <<endl;}
};

class Monster: public Enemy{
    public:
        void attack()
        {cout<< "monster must eat you!!!! = -" <<attackPower <<endl;}
};


int main() {
    Ninja n;
    Monster m;

    Enemy* enemyl = &n;  // Because Ninja is of type Enemy, this assignment is valid
    Enemy* enemy2 = &m;  // Anything that an Enemy can do, Monster can do

    enemyl->setAttackPower(4);  // Ninja is just a more specific type of Enemy
    enemy2->setAttackPower(26);  // Every Enemy has setAttackPower

    n.attack();  // Can't use enemyl because it's of type Enemy
    m.attack();  // Enemy class does not have attack

    return 0;  // Virtual members make this even easier
}

