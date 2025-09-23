#include <iostream>
using namespace std;

int main()
{
    char arr[5] = {'a', 'd', 'f', 'g', 'z'};

    cout << "Address of the 0th index: " << static_cast<void *>(&arr[0]);
    return 0;
}