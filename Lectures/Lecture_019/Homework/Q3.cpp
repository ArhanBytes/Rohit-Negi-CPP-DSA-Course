#include <iostream>
using namespace std;

int main()
{
    char arr[5] = {'b', 'z', 'a', 'm', 'y'};
    int n = 5;

    for (int i = 0; i < n - 1; i++)
    {
        int index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[index])
                index = j;
        }
        swap(arr[i], arr[index]);
    }

    // print array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}