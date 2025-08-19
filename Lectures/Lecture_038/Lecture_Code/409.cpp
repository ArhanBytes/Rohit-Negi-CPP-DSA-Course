class Solution
{
public:
    int longestPalindrome(string s)
    {
        int upper[26] = {0};
        int lower[26] = {0};

        // storing the count
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'a')
                lower[s[i] - 'a'] += 1;
            else
                upper[s[i] - 'A'] += 1;
        }

        // if there even we increment directly else odd - 1
        int count = 0;
        bool odd = 0;
        for (int i = 0; i < 26; i++)
        {
            // for upper case
            if (upper[i] & 1)
            {
                odd = 1;
                count += upper[i] - 1;
            }
            else
                count += upper[i];

            // for lower case
            if (lower[i] & 1)
            {
                odd = 1;
                count += lower[i] - 1;
            }
            else
                count += lower[i];
        }

        return count + odd;
    }
};