// User function template for c++
class Solution
{
public:
    int findMaxLen(string s)
    {
        stack<int> st;
        st.push(-1);
        int max_valid = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
                st.push(i);
            else
            {
                st.pop();

                if (st.empty())
                    st.push(i);

                max_valid = max(max_valid, i - st.top());
            }
        }

        return max_valid;
    }
};

// copied 
// solve the almost part but couldn't pick up the length calculating part