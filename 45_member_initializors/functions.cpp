#include "functions.h"
#include <iostream>
using namespace std;


functions::functions(int a, int b)

: regVar(a),
constVar(b)
{
}


void functions::print(){

    cout << "regular var is " << regVar << "constant var is " << constVar << endl;

}

