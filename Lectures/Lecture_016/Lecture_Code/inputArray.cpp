#include <iostream>
using namespace std;

int main()
{

    int size;
    cout << "Enter the size of an array: ";
    cin >> size;

    // input array
    int arr[1000];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // printing array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}