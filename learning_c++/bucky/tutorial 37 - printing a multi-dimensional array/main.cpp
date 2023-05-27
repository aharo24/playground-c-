/*

*/
#include <iostream>
using namespace std;

int main()
{
    int bertha[2][3]= {
                        {1,2,3},
                        {7,8,9}
                      };
    for(int row=0; row<2; ++row){

        for(int col=0; col<3; ++col){
            cout<< bertha[row][col]<< " ";    //inside the "row" for loop.
        }
        cout<< endl; //before the for loop
    }

}