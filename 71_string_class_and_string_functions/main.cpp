#include <iostream>
#include <string> // gives you string functions
using namespace std;

int main()
{
    string s1 = "asdfasdfasf";
    cout << s1.at(3) << endl;

    for(int x =0; x<s1.length();x++){
        cout << s1.at(x);
    }

}
