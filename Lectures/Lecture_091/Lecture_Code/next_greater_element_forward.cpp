class Solution
{
public:
    vector<int> nextLargerElement(vector<int> &arr)
    {
        stack<int> s;
        int n = arr.size();     // size of array
        vector<int> ans(n, -1); // answer array

        for (int i = 0; i < n; i++)
        {
            while (!s.empty() && arr[i] > arr[s.top()])
            {
                ans[s.top()] = arr[i];
                s.pop();
            }
            s.push(i);
        }

        return ans;
    }
};