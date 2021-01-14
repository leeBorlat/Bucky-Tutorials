#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    for(int a = number; a >= 1; a--)
    {
        for(int b = 1; b <= a; b++)
        {
            cout << number;
        }
            cout << endl;
    }
    for (int a = 1; a <=number;a++){
            for(int b = 1; b <= a; b++){
            cout << number;
            }
            cout << endl;

    }





    return 0;
}
