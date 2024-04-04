#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key)
{
    int start = 0, end = n - 1, mid;

    while (start <= end)
    {
        mid = end + ((start - end) / 2);
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}

int main()
{
    int arr[1000];
    int n;
    cout << "Enter the no of elements in an array: ";
    cin >> n;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int key;
    cout << "Enter the target: ";
    cin >> key;

    cout << BinarySearch(arr, n, key);

    return 0;
}