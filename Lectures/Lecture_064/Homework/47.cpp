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
        for (int i = index; i < n; i++)
        {
            bool duplicate = false;

            for (int j = index; j < i; j++)
            {
                if (nums[j] == nums[i])
                {
                    duplicate = true;
                    break;
                }
            }

            if (duplicate)
                continue;

            swap(nums[i], nums[index]);
            permute(nums, index + 1, n, ans);
            swap(nums[i], nums[index]);
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