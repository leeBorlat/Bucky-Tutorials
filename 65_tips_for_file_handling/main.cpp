#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ofstream buckysFile("beefjerky.txt");

    if(buckysFile.is_open()){
        cout << "The file is open" << endl;
        }else{
            cout << "Bucky you messed up" << endl;
        }



    buckysFile << "I love the beef\n";
    buckysFile.close();
}
