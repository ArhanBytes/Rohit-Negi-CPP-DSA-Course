#include <iostream>
using namespace std;

// search from front
int minimum(int *arr, int index, int n)
{
    if (index == n - 1)
        return arr[index];

    return min(arr[index], minimum(arr, index + 1, n));
}

// search from behind
int minimum(int *arr, int index)
{
    if (index == 0)
        return arr[index];

    return min(arr[index], minimum(arr, index - 1));
}

int main()
{
    int arr[] = {3, 4, 1, 2, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Minimum element of array from front: " << minimum(arr, 0, size) << endl;
    cout << "Minimum element of array from behind: " << minimum(arr, size - 1);
    return 0;
}