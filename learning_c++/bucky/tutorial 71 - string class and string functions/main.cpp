/*
<string>:
    - gives you string functions
cin:
    - it only reads until the 1st whitespace
getline:
    - it reads until you hit 'enter'
strings:
    - ARE arrays of characters
*/
#include <iostream>
#include <string> //gives you string functions
using namespace std;

int main()
{
    string s1("hampster ");
    string s2;
    string s3;

    s2= s1;
    s3.assign(s1);

    cout<< s1<< s2<< s3<< endl;

    cout<< "\n";
    string s4= "omgwtffbbq";
    cout<< s1.at(3);

    cout<< "\n\n";

    for (int x=0; x<s1.length();++x){
        cout<< s1.at(x);
    }

}