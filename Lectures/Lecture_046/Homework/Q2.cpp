#include <iostream>
using namespace std;

int main()
{
    char name = 'r';

    cout << "Address of the varaible: " <<static_cast<void*>(&name);
    return 0;
}