#include <iostream>
#include "mystring.h"

using namespace std;

int main()
{
    MyString hello("Hello ");
    MyString world("world!");
    
    cout << hello + world << endl;
    cout << hello + " WORLD!!!!!" << endl;
    cout << hello.add(world) << endl;
    return 0;
}
