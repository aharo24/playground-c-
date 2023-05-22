#include <iostream>

using namespace std;
/*
cout --> takes information from the computer Out 
cin --> takes information from the computer IN 
cin --> input stream object [school]
>> --> stream extraction operator [school]
*/
int main()
{
    int a;
    int b;
    int sum;

    cout<< "Enter a number: \n";
    cin>> a;

    cout<< "Enter a number: \n";
    cin>> b;

    sum= a+b;
    
    cout<< "\n"<< sum;


    return 0;
}