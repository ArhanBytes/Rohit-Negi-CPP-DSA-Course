// User function Template for C++

class Solution
{
public:
    vector<int> makeBeautiful(vector<int> arr)
    {
        stack<int> st;

        for (int i = 0; i < arr.size(); i++)
        {
            if (st.empty())
                st.push(arr[i]);
            else if (arr[i] >= 0)
            {
                if (st.top() >= 0)
                    st.push(arr[i]);
                else
                    st.pop();
            }
            else
            {
                if (st.top() < 0)
                    st.push(arr[i]);
                else
                    st.pop();
            }
        }

        vector<int> ans(st.size());

        int index = st.size() - 1;
        while (!st.empty())
        {
            ans[index] = st.top();
            index--;
            st.pop();
        }

        return ans;
    }
};