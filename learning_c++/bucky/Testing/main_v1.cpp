#include <iostream>
/*
standard stuff:
    we usually neva want to have our stuff as 'public'

we make the var private but we make a setter funct to get the private vars n stuff

set is void --> we are NOT returning anything we are just 'setting' 
get is [ ] --> we use the data type[] because we just want TO return 
*/
using namespace std;


class AngelsObject{
    public:
        void setName(string x){
            name = x;
        }
        string getName(){
            return name;
        }
    private:
        string name;
};

int main()
{
    AngelsObject ao;
    ao.setName("Angel J Haro");
    cout<< ao.getName();

    return 0;
}