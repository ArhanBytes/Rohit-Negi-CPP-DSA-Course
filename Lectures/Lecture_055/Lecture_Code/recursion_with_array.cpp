#include <iostream>
using namespace std;

void print(int *arr, int index)
{
    if (index == -1)
        return;

    print(arr, index - 1);
    cout << arr[index] << " ";
}

int main()
{
    int arr[] = {3, 4, 1, 2, 8};
    int size = 5;
    print(arr, size - 1);
    return 0;
}