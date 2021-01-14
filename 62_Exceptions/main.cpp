#include <iostream>

using namespace std;

int main()
{
   try{
        int momsAge = 50;
        int sonsAge = 34;

        if(sonsAge > momsAge){
            throw 69;
        }

   }catch(int x){
    cout << "son cannot be older than mom, ERROR NUMBER: " << x << endl;
   }
}
