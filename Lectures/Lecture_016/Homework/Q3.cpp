#include <iostream>
using namespace std;

int main()
{
    int n; // size of an array
    cout << "Enter the no of elements: ";
    cin >> n;

    int arr[1000];

    // input the elements
    for (int i = 0; i < n; i++)
    {
        cout << "Element at position " << i + 1 << " : ";
        cin >> arr[i];
    }

    int keyElem;
    cout << "Which element do you want to find? ";
    cin >> keyElem;

    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == keyElem)
        {
            index = i;
            break;
        }
    }

    cout << "At Index: " << index;

    return 0;
}