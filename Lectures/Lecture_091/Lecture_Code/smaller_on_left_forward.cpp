class Solution
{
public:
    vector<int> leftSmaller(vector<int> arr)
    {
        int n = arr.size();
        vector<int> ans(n, -1);
        stack<int> st;

        for (int i = 0; i < n; i++)
        {
            while (!st.empty() && arr[i] <= arr[st.top()])
            {
                st.pop();
            }

            if (!st.empty())
                ans[i] = arr[st.top()];

            st.push(i);
        }

        return ans;
    }
};