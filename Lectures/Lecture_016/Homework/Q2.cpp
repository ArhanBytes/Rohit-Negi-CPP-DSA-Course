#include <iostream>
using namespace std;

int main()
{
    int arr[18] = {2, 4, 6, 8, 10, 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 12, 14, 16};
    int n = 18; // size of an array

    // sum of elements
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    // average of elemetns
    cout << "Average: " << sum / 18.0 << endl;

    return 0;
}