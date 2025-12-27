class Solution
{
public:
    vector<int> nextSmallerEle(vector<int> &arr)
    {

        vector<int> ans(arr.size(), -1);
        stack<int> st;

        for (int i = 0; i < arr.size(); i++)
        {
            while (!st.empty() && arr[i] < arr[st.top()])
            {
                ans[st.top()] = arr[i];
                st.pop();
            }

            st.push(i);
        }

        return ans;
    }
};