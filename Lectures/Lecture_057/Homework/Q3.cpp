#include <iostream>
#include <vector>
using namespace std;

void shift_right(vector<int> &arr, int index, int last)
{
    // base case
    if (index == 0)
    {
        arr[index] = last;
        return;
    }

    // handle one condition and then recursive call
    arr[index] = arr[index - 1];
    shift_right(arr, index - 1, last);
}
int main()
{
    vector<int> arr = {11, 9, 6, 4, 2, 1};
    cout << "Array Before: ";
    for (auto i : arr)
        cout << i << " ";

    shift_right(arr, arr.size() - 1, arr[arr.size() - 1]);

    cout << "\nArray After: ";
    for (auto i : arr)
        cout << i << " ";
    return 0;
}