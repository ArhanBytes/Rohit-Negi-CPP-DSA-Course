class Solution
{
public:
    bool checkPalindrome(string &str, int s, int e)
    {
        // base case
        if (s >= e)
            return 1;

        // checking
        if (str[s] != str[e])
            return 0;

        // recursive call
        return checkPalindrome(str, s + 1, e - 1);
    }

    bool isPalindrome(string &s)
    {
        return checkPalindrome(s, 0, s.size() - 1);
    }
};