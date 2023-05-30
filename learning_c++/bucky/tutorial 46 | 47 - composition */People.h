#ifndef PEOPLE_H
#define PEOPLE_H

#include <string>
#include "Birthday.h" // we need this because we are going to be storing a bday OBJECT
using namespace std;

class People
{
public:
    People(string x, Birthday bo);
    void printInfo();
private:
    string name;
    Birthday dateOfBirth; // dob OBJECT
};

#endif