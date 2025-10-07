class Solution
{
public:
    int find(vector<int> &arr, int index, int n, int currentSum, int &target)
    {
        // base case
        if (currentSum > target)
            return 0;
        if (index == n)
        {
            return currentSum == target;
        }

        // include + exclude
        return find(arr, index + 1, n, currentSum + arr[index], target) + find(arr, index + 1, n, currentSum, target);
    }

    int perfectSum(vector<int> &arr, int target)
    {
        // code here
        return find(arr, 0, arr.size(), 0, target);
    }
};

// time limit exceed but the code works perfectly find