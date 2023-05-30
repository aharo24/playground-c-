#include "Birthday.h"
#include <iostream>
using namespace std;

Birthday::Birthday(int m, int d, int y)
{
    this->month = m;
    this->day = d;
    this->year = y;
}

void Birthday::printDate(){
    cout<< month<< "/"<< day<< "/"<< year<< endl;
}
