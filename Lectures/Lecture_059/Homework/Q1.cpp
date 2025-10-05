#include <iostream>
#include <vector>
using namespace std;

void merge(int *arr, int s, int mid, int e)
{
    vector<int> temp(e - s + 1);
    int left = s, right = mid + 1, index = 0;

    while (left <= mid && right <= e)
    {
        if (arr[left] > arr[right])
        {
            temp[index] = arr[left];
            left++;
        }
        else
        {
            temp[index] = arr[right];
            right++;
        }
        index++;
    }

    // left array is not last yet
    while (left <= mid)
    {
        temp[index] = arr[left];
        left++, index++;
    }

    // right array is not last yet
    while (right <= e)
    {
        temp[index] = arr[right];
        right++, index++;
    }

    // copy the temp to original
    index = 0;
    for (int i = s; i <= e; i++)
        arr[i] = temp[index++];
}

void merge_sort(int *arr, int s, int e)
{
    if (s == e)
        return;

    int mid = s + (e - s) / 2;

    merge_sort(arr, s, mid);     // left
    merge_sort(arr, mid + 1, e); // right

    merge(arr, s, mid, e);
}

int main()
{
    int arr[] = {6, 3, 1, 2, 8, 9, 10, 7, 3, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Before: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    merge_sort(arr, 0, size - 1);

    cout << "\nAfter: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}