class Solution
{
public:
    vector<int> nextSmallerEle(vector<int> &arr)
    {

        vector<int> ans(arr.size(), -1);
        stack<int> st;

        for (int i = arr.size() - 1; i >= 0; i--)
        {
            while (!st.empty() && arr[i] <= arr[st.top()])
            {
                st.pop();
            }

            if (!st.empty())
            {
                ans[i] = arr[st.top()];
            }
            st.push(i);
        }

        return ans;
    }
};