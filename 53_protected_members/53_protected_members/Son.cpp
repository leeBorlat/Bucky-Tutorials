#include "Father.h"
#include "Son.h"
#include <iostream>

using namespace std;

Son::Son()
{
    cout << "I am the son constructor " << endl;
}

Son::~Son()
{
    cout << "son deconstructor" << endl;
}
