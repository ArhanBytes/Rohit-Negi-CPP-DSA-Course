class Solution
{
public:
    int minAddToMakeValid(string str)
    {
        int opening_bracket = 0;
        int left_absent = 0;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '(')
                opening_bracket++;
            else
            {
                if (opening_bracket == 0)
                    left_absent++;
                else
                    opening_bracket--;
            }
        }

        int right_absent = opening_bracket;

        int ans = left_absent + right_absent;
        return ans;
    }
};