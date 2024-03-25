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

    // sum of elements
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    cout << "Sum: " << sum << endl;

    return 0;
}