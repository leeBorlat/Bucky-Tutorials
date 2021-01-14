#include "Father.h"
#include "Son.h"
#include <iostream>

using namespace std;

Father::Father()
{
    cout << "I am the father constructor " << endl;
}

Father :: ~Father (){

    cout << "Father deconstructor" << endl;
}
