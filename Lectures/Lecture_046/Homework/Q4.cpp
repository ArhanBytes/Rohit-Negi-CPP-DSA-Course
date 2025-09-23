#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    cout << "Address using arr: " << arr << endl;
    cout << "Address using &arr: " << &arr << endl;

    cout << "Value of *arr: " << *arr << endl;   // prints first element (1)
    cout << "Value of *&arr: " << *&arr << endl; // prints address of whole array (same as arr)

    // Pointer arithmetic difference
    cout << "arr + 1 points to: " << arr + 1 << endl;   // moves 1 int ahead
    cout << "&arr + 1 points to: " << &arr + 1 << endl; // moves 1 full array (5 ints) ahead

    return 0;
}
