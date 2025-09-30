#include <iostream>
using namespace std;

// search from front
int product(int *arr, int index, int n)
{
    if (index == n - 1)
        return arr[index];

    return arr[index] * product(arr, index + 1, n);
}
// search from behind
int product(int *arr, int index)
{
    if (index == 0)
        return arr[index];

    return arr[index] * product(arr, index - 1);
}

int main()
{
    int arr[] = {3, 4, 1, 2, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Product of elements of array from front: " << product(arr, 0, size) << endl;
    cout << "Product of elements of array from behind: " << product(arr, size - 1);
    return 0;
}