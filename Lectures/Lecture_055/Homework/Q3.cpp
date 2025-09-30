#include <iostream>
using namespace std;

// search from front
int nos_of_even(int *arr, int index, int n)
{
    if (index == n - 1)
        return arr[index] % 2 == 0;

    return (arr[index] % 2 == 0) + nos_of_even(arr, index + 1, n);
}
// search from behind
int nos_of_even(int *arr, int index)
{
    if (index == 0)
        return arr[index] % 2 == 0;

    return (arr[index] % 2 == 0) + nos_of_even(arr, index - 1);
}

int main()
{
    int arr[] = {3, 4, 1, 2, 8, 11, 12, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Number of even elements in an array from front: " << nos_of_even(arr, 0, size) << endl;
    cout << "Number of even elements in an array from behind: " << nos_of_even(arr, size - 1);
    return 0;
}