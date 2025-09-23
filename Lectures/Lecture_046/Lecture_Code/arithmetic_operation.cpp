#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    // print all the value
    for (int i = 0; i < 5; i++)
        cout << ptr[i] << " ";

    cout << endl;
    // print all the address
    for (int i = 0; i < 5; i++)
        cout << ptr + i << " ";

    cout << endl;

    // arithmetic operations
    // ptr++, ptr--, ptr = ptr + 1
    for (int i = 0; i < 5; i++)
    {
        cout << *ptr << " ";
        ptr++;
    }
    ptr = arr;
    cout << endl;

    ptr = ptr + 3;
    cout << *ptr << endl;

    ptr = ptr - 2;
    cout << *ptr << endl;
    return 0;
}