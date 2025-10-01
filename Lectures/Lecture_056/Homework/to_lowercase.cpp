// User function Template for C++

class Solution
{
public:
    void u_to_l(string &str, int index)
    {
        if (index == -1)
            return;

        if (str[index] >= 'A' && str[index] <= 'Z')
            str[index] = (str[index] - 'A') + 'a';

        u_to_l(str, index - 1);
    }

    string toLower(string &s)
    {
        u_to_l(s, s.size() - 1);
        return s;
    }
};