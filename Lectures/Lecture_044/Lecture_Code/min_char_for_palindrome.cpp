class Solution
{
public:
    int minChar(string &s)
    {
        string rev = s;
        // reverseing the string
        reverse(rev.begin(), rev.end());

        int size = s.size();
        // updating the original string
        s = s + '&' + rev;

        // finding longest prefix suffix
        vector<int> lps(s.size(), 0);
        int prefix = 0, suffix = 1;
        while (suffix < s.size())
        {
            if (s[prefix] == s[suffix])
            {
                lps[suffix] = prefix + 1;
                prefix++, suffix++;
            }
            else
            {
                if (prefix == 0)
                {
                    lps[suffix] = 0;
                    suffix++;
                }
                else
                {
                    prefix = lps[prefix - 1];
                }
            }
        }

        return size - lps[s.size() - 1];
    }
};
