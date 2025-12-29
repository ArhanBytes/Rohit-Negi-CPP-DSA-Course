class Solution
{
public:
    vector<int> maxOfMins(vector<int> &arr)
    {
        //  code here
        int n = arr.size();
        vector<int> ans(n, 0);

        for (int i = 0; i < n; i++)
        {
            int mini = INT_MAX;
            for (int j = i; j < n; j++)
            {
                mini = min(mini, arr[j]);
                // j-i+1 is a window size while storing in answer array the indexed is 0-based there fore j-i corespoinding to (j-i+1)th element
                ans[j - i] = max(ans[j - i], mini);
            }
        }
        return ans;
    }
};