class Solution
{
public:
    void subset_sum(vector<int> &arr, int index, int currentSum, vector<int> &ans)
    {
        if (index == arr.size())
        {
            ans.push_back(currentSum);
            return;
        }
        // include
        subset_sum(arr, index + 1, currentSum + arr[index], ans);
        // exclude
        subset_sum(arr, index + 1, currentSum, ans);
    }
    vector<int> subsetSums(vector<int> &arr)
    {
        vector<int> ans;
        subset_sum(arr, 0, 0, ans);

        return ans;
    }
};