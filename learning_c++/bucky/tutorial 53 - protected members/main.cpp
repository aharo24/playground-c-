/*
protected:
    - anything inside the class has acess
    - friend has acess
    - derived has access
private:
    - CANNOT inherit!!!!

-Protected, just like public, allows you to inherit its contents.
-Protected, just like private, stops anything outside trying to 
access/change its objects (such as a value or function).
*/
#include <iostream>
#include "Mother.h"
#include "Daughter.h"
using namespace std;

int main()
{
    Daughter tina;
    tina.doSomething();
}