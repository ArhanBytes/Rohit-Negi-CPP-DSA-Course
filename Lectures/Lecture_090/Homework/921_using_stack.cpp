class Solution
{
public:
    int minAddToMakeValid(string str)
    {
        stack<char> s;
        int left = 0;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '(')
                s.push(str[i]);
            else
            {
                if (s.empty())
                    left++;
                else
                    s.pop();
            }
        }

        int right = s.size();

        int ans = left + right;
        return ans;
    }
};