#include <iostream>
using namespace std;

int main()
{
    int arr[1000];
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;


    cout << "Enter the element in an array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = n - 2; i >= 0; i--)
    {
        bool isSwap = 0;
        for (int j = 0; j <= i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwap = 1;
            }
        }
        if (!isSwap)
            break;
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}