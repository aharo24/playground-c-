#include <iostream>
/*
constructor:
    just a special func
    are to give variables an Initial val

each object has its own set of variables 

What he says about objects is SUPER important. 
Remember, you're creating an instance(copy) of the class, NOT a link to the class itself.
*/
using namespace std;

class AngelsClass {
    public:
        AngelsClass(string z){
            setName(z);
        }
        void setName(string x){
            name= x;
        }
        string getName(){
            return name;
        }

    private:
        string name;
};

int main()
{
    AngelsClass ao("Lucky Angel Lala");
    cout<< ao.getName();

    return 0;
}