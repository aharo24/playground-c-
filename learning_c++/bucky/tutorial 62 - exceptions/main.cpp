/*

*/
#include <iostream>
using namespace std;

int main()
{
    try{
        int momsAge= 30;
        int sonsAge= 34;
        
        if (sonsAge>momsAge) {
            throw 99;
        }
    } catch(int x){
        cout<< "son cannot be older than mom v_V ERROR NUMBER: " <<x <<endl;
    } 

}