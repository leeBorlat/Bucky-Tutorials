#include "Birthday.h"
#include "People.h"
#include <iostream>
using namespace std;

int main()
{

    Birthday birthObj(12,28,1986);

    People buckyRoberts("bucky the king",birthObj);
    buckyRoberts.printInfo();

}
