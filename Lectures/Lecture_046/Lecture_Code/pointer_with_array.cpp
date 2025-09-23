#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    // print the address of first element or 0 index
    cout << arr << endl;
    cout << arr + 0 << endl;
    cout << &arr[0] << endl;
    cout << ptr << endl;

    // print the address of second element or 1 index
    cout << arr + 1 << endl;
    cout << &arr[1] << endl;

    // print the value of 0 index
    cout << arr[0] << endl;
    cout << *(arr) << endl;
    cout << *(arr + 0) << endl;
    cout << *ptr << endl;

    // print address of all element
    for (int i = 0; i < 5; i++)
        cout << arr + i << " ";

    // print value of all element
    for (int i = 0; i < 5; i++)
        cout << *(arr + i) << " ";
    return 0;
}