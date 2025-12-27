class Solution
{
public:
    string convert_to_num(stack<int> &st)
    {
        string s = "";
        while (!st.empty())
        {
            s.push_back(st.top() + '0');
            st.pop();
        }

        while (s[s.size() - 1] == '0')
            s.pop_back();

        reverse(s.begin(), s.end());

        return s;
    }
    string removeKdig(string &s, int k)
    {
        // code here
        stack<int> st;

        int i;
        for (i = 0; i < s.size(); i++)
        {
            // find the next smallest
            while (!st.empty() && k != 0 && (s[i] - '0' < st.top()))
            {
                st.pop();
                k--;
            }
            st.push(s[i] - '0');
        }

        while (k-- && !st.empty())
        {
            st.pop();
        }

        string ans = convert_to_num(st);

        if (ans.size() == 0)
            return "0";

        return ans;
    }
};