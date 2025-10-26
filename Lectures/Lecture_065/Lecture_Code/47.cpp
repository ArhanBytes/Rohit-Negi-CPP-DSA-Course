class Solution
{
public:
    void permute(vector<int> &nums, int index, int n, vector<vector<int>> &ans)
    {
        // base case
        if (index == n - 1)
        {
            ans.push_back(nums);
            return;
        }

        // recursive approach
        vector<bool> use(21, 0);
        for (int i = index; i < n; i++)
        {
            if (use[nums[i] + 10] == false)
            {
                swap(nums[i], nums[index]);
                permute(nums, index + 1, n, ans);
                swap(nums[i], nums[index]);
                use[nums[i] + 10] = true;
            }
        }
    }

    vector<vector<int>> permuteUnique(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());

        vector<vector<int>> ans;

        permute(nums, 0, nums.size(), ans);

        return ans;
    }
};