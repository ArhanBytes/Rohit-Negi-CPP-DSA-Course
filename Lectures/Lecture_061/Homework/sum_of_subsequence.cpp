#include <iostream>
#include <string>
#include <vector>
using namespace std;

int sum_of_subsequence(vector<int> &arr, int index, int currentSum)
{
    // base case
    if (index == arr.size())
        return currentSum;

    // for No
    int exclude = sum_of_subsequence(arr, index + 1, currentSum);
    // for YES
    int include = sum_of_subsequence(arr, index + 1, currentSum + arr[index]);

    return include + exclude;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4};

    int sum = sum_of_subsequence(arr, 0, 0);

    cout << "Sum of Subsequence of array [";
    for (auto i : arr)
        cout << i << " ";
    cout << "] : " << sum;

    return 0;
}