#include <iostream>
#include <vector>
using namespace std;

int target_sum_with_reps(vector<int> &arr, int index, int n, int sum)
{
    // base case
    if (sum == 0)
        return 1;
    if (index == n || sum < 0)
        return 0;

    // exclude + include
    return target_sum_with_reps(arr, index + 1, n, sum) + target_sum_with_reps(arr, index, n, sum - arr[index]);
}

int main()
{
    vector<int> arr = {2, 3, 4};
    int sum = 6;

    cout << target_sum_with_reps(arr, 0, arr.size(), sum);
    return 0;
}