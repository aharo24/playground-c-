/*

*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1("OMG i think i am preggy!");
    cout<< s1.substr(17,7) <<endl;

    cout<< "\n\n";
    string one("apples ");
    string two("beans ");
    cout<< one<< two<< endl;
    one.swap(two);
    cout<< one<< two<< endl;

    
    cout<< "\n\n";
    string s48("ham is spam oh yes i am!");
    cout<< s48.find("am")<< endl;
    cout<< s48.rfind("am")<< endl;

    // find --> First array[char] that it finds
    // find --> Reverse_Find array[char] that it finds

}