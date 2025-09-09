class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        vector<int> lfs(needle.size(), 0);
        // updating longest suffix and prefix sum
        int prefix = 0, suffix = 1;
        while (suffix < needle.size())
        {
            if (needle[prefix] == needle[suffix])
            {
                lfs[suffix] = prefix + 1;
                prefix++, suffix++;
            }
            else
            {
                if (prefix == 0)
                {
                    lfs[suffix] = 0;
                    suffix++;
                }
                else
                    prefix = lfs[prefix - 1];
            }
        }

        // s and f is pointers who target needle and haystack respectively
        int s = 0, f = 0;
        while (s < needle.size() && f < haystack.size())
        {
            if (haystack[f] == needle[s])
            {
                s++, f++;
            }
            else
            {
                if (s == 0)
                    f++;
                else
                    s = lfs[s - 1];
            }
        }

        if (s == needle.size())
            return f - s;
        else
            return -1;
    }
};