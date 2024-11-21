#include <iostream>
#include <vector>
using namespace std;

void printArray(const vector<int> &v)
{
    cout << "[ ";
    for (auto i : v)
        cout << i << " ";
    cout << "]" << endl;
}
void prefixSum(int arr[], int n)
{
    vector<int> prefix(n);

    cout << "Prefix sum: ";
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    printArray(prefix);
}

void suffixSum(int arr[], int n)
{
    vector<int> suffix(n);

    cout << "suffix sum: ";
    suffix[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        suffix[i] = suffix[i + 1] + arr[i];
    }

    printArray(suffix);
}

int main()
{
    int arr[] = {6, 4, 5, -3, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    prefixSum(arr, n);

    suffixSum(arr, n);
}