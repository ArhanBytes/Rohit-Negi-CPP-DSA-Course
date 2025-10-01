#include <iostream>
#include <vector>
using namespace std;

bool binary_search(vector<int> &arr, int k, int s, int e)
{
    // base case
    if (s > e)
        return 0;

    // handle one case and recursive call
    int mid = s + (e - s) / 2;

    if (arr[mid] == k)
        return 1;
    if (arr[mid] < k)
        return binary_search(arr, k, s, mid - 1);
    else
        return binary_search(arr, k, mid + 1, e);
}

int main()
{
    vector<int> arr = {11, 9, 6, 4, 2, 1};
    int k = 0;
    cout << binary_search(arr, k, 0, arr.size() - 1);

    return 0;
}