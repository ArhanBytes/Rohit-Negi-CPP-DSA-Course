#include <iostream>
#include <vector>
using namespace std;

void subset_alongwith_sum(vector<int> &arr, int index, int n, int currentSum, vector<int> &temp)
{
    // base case
    if (index == n)
    {
        cout << "Sum: " << currentSum << "\t Subset: [ ";
        for (auto i : temp)
            cout << i << " ";
        cout << "]" << endl;

        return;
    }

    // excluded
    subset_alongwith_sum(arr, index + 1, n, currentSum, temp);
    temp.push_back(arr[index]);
    subset_alongwith_sum(arr, index + 1, n, currentSum + arr[index], temp);
    temp.pop_back();
}
int main()
{
    vector<int> arr = {1, 2, 3,4};
    vector<int> temp;

    subset_alongwith_sum(arr, 0, arr.size(), 0, temp);
    return 0;
}