// User function Template for C++
class Solution
{
public:
    void rev(string &str, int s, int e)
    {
        if (s >= e)
            return;

        swap(str[s], str[e]);
        rev(str, s + 1, e - 1);
    }

    string revStr(string s)
    {
        rev(s, 0, s.size() - 1);
        return s;
    }
};