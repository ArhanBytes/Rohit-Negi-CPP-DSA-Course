#include <iostream>
#include <vector>
using namespace std;

void rev(vector<int> &arr, int s, int e)
{
    if (s >= e)
        return;

    swap(arr[s], arr[e]);
    rev(arr, s + 1, e - 1);
}
int main()
{
    vector<int> arr = {11, 9, 6, 4, 2, 1};
    cout << "Array Before: ";
    for (auto i : arr)
        cout << i << " ";

    rev(arr, 0, arr.size() - 1);

    cout << "\nArray After: ";
    for (auto i : arr)
        cout << i << " ";
    return 0;
}