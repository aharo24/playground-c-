/*

*/
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream buckysFile("beefjerky.txt");

    if (buckysFile.is_open()){
        cout<<"okt the file is open" <<endl;
    } else{
        cout<< "bucky oyu mess up"<< endl;
    }
    buckysFile<< "oi love the beef\n";
    buckysFile.close();

}