#include <iostream>
using namespace std;

int partition(int *arr, int s, int e)
{
    int pos = s;
    for (int i = s; i <= e; i++)
    {
        if (arr[i] <= arr[e])
        {
            swap(arr[i], arr[pos]);
            pos++;
        }
    }

    return pos - 1;
}

void quick_sort(int *arr, int s, int e)
{
    if (s >= e)
        return;

    int pivot = partition(arr, s, e);

    quick_sort(arr, s, pivot - 1);
    quick_sort(arr, pivot + 1, e);
}

int main()
{
    int arr[] = {6, 4, 2, 8, 13, 7, 11, 9, 3, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Before: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    quick_sort(arr, 0, size - 1);

    cout << "\nAfter: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}