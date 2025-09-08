class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        bool isPresent[256] = {0};
        int len = 0, i = 0, j = 0;

        while (j < s.size())
        {
            if (isPresent[s[j]] == 0) // no repeation is happend yet
            {
                isPresent[s[j]] = 1;
                len = max(len, j - i + 1);
                j++;
            }
            else
            {
                while (isPresent[s[j]]) // if repeatition is there
                {
                    isPresent[s[i]] = 0;
                    i++;
                }
            }
        }

        return len;
    }
};