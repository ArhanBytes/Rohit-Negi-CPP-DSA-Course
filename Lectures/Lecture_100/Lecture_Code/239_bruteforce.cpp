class Solution
{
public:
    vector<int> maxSlidingWindow(vector<int> &nums, int k)
    {
        vector<int> ans;
        int n = nums.size();

        for (int i = 0; i <= n - k; i++)
        {
            int maxi = INT_MIN;
            for (int j = i; j < i + k; j++)
            {
                maxi = max(maxi, nums[j]);
            }
            ans.push_back(maxi);
        }

        return ans;
    }
};