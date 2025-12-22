// User function template for C++
class Solution
{
public:
    vector<int> bracketNumbers(string str)
    {
        stack<int> st;
        vector<int> ans;

        int count = 0;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '(')
            {
                count++;
                st.push(count);
                ans.push_back(count);
            }
            else if (str[i] == ')')
            {
                ans.push_back(st.top());
                st.pop();
            }
        }

        return ans;
    }
};