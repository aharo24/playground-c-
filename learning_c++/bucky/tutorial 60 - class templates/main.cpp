/*
Generic Data Type:
    Templates
example of class generic:
    T Bucky<T>::bigger(){

main.cpp:28:5: error: use of class template 'Bucky' requires template arguments
    Bucky bo(69, 105);
    ^
main.cpp:11:7: note: template is declared here
class Bucky{
*/
#include <iostream>
using namespace std;

template <class T>
class Bucky{
    T first, second;
    public:
        Bucky(T a, T b){
            first= a;
            second= b;
        }
        T bigger();
};

template <class T>
T Bucky<T>::bigger(){
    return (first>second ?first :second);
}

int main()
{
    Bucky <int> bo(69, 105);
    cout<< bo.bigger();

}