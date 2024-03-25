#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "Size of array: " << sizeof(arr) << " ";

    cout << "Elements in an array: " << sizeof(arr) / sizeof(arr[0]) << " ";

    return 0;
}