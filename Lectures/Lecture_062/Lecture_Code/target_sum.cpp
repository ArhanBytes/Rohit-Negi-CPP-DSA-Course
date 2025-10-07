#include <iostream>
#include <vector>
using namespace std;

// Method: 01
bool target_sum(vector<int> &arr, int index, int n, int currentSum, int &targetSum)
{
    // base case
    if (index == n)
    {
        return currentSum == targetSum;
    }

    // recursive call

    // include || exclude
    return target_sum(arr, index + 1, n, currentSum + arr[index], targetSum) || target_sum(arr, index + 1, n, currentSum, targetSum);
}

// Method: 02
bool target_sum(vector<int> &arr, int index, int n, int target)
{
    if (target == 0)
        return 1;
    if (index == n || target < 0)
        return 0;

    return target_sum(arr, index + 1, n, target) || target_sum(arr, index + 1, n, target - arr[index]);
}
int main()
{
    vector<int> arr = {3, 6, 4, 5};
    int targetSum = 12;
    cout << target_sum(arr, 0, arr.size(), 0, targetSum) << endl;
    cout << target_sum(arr, 0, arr.size(), targetSum);
    return 0;
}