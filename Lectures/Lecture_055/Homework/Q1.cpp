#include <iostream>
using namespace std;

// search from front
int maximum(int *arr, int index, int n)
{
    if (index == n - 1)
        return arr[index];

    return max(arr[index], maximum(arr, index + 1, n));
}
// search from behind
int maximum(int *arr, int index)
{
    if (index == 0)
        return arr[index];

    return max(arr[index], maximum(arr, index - 1));
}

int main()
{
    int arr[] = {3, 4, 1, 2, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Maximum element of array from front: " << maximum(arr, 0, size) << endl;
    cout << "Maximum element of array from behind: " << maximum(arr, size - 1);
    return 0;
}