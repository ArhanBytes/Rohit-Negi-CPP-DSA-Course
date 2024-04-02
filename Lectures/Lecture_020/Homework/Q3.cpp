#include <iostream>
using namespace std;

int main()
{
    char arr[5] = {'b', 'z', 'a', 'm', 'y'};
    int n = 5;

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