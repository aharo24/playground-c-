/*
a class inside another --> Member Initializer
*/
#include "People.h"
#include "Birthday.h"
#include <iostream>
using namespace std;

People::People(string x, Birthday bo)
: name(x), dateOfBirth(bo)  // since we are using the birthdayOBJECT we need to do ':'
{
}

void People::printInfo(){
    cout<< name<< " was born on ";
    dateOfBirth.printDate();
}
 