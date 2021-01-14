#include <iostream>

using namespace std;

template <class bucky>

bucky addCrap ( bucky a, bucky b){
    return a+b;
}

int main()
{
    float x=7.53, y=43.23, z;
    z=addCrap(x,y);
    cout << z << endl;
}
