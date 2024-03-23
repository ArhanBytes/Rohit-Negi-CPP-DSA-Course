class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
            return 0;

        int rem, rev = 0, originalN = x;
        while (x)
        {
            rem = x % 10;
            if (rev > INT_MAX / 10)
                return 0;
            rev = rev * 10 + rem;
            x /= 10;
        }

        if (originalN == rev)
            return 1;
        else
            return 0;
    }
};