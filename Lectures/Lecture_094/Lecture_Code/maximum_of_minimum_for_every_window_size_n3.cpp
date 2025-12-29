class Solution
{
public:
    vector<int> maxOfMins(vector<int> &arr)
    {
        //  code here
        int n = arr.size();
        vector<int> ans(n, 0);

        for (int i = 0; i < n; i++) // har aik window ka liya
        {
            for (int j = 0; j < n - i; j++) // total how many windows
            {
                int mini = INT_MAX;
                // we will find the minimum from that particular window
                for (int k = j; k <= j + i; k++) // window ka starting point sa ending point tk
                {
                    mini = min(mini, arr[k]);
                }

                ans[i] = max(ans[i], mini);
            }
        }

        return ans;
    }
};