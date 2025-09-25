#include <iostream>
using namespace std;

int main()
{
    // Allocation of heap memory to variable
    int *ptr = new int;
    *ptr = 5;
    cout << *ptr << endl;

    float *ptr2 = new float;
    *ptr2 = 1.24;
    cout << *ptr2 << endl;

    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int *p = new int[n];

    // Assign a value
    for (int i = 0; i < n; i++)
        *(p + i) = i + 1;

    cout << "Printing the values: ";
    for (int i = 0; i < n; i++)
        cout << p[i] << " ";

    // Releasing the memory from Heap
    delete ptr;
    delete ptr2;
    delete[] p;

    return 0;
}