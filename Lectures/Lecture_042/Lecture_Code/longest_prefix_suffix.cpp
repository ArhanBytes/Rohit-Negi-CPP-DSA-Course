class Solution
{
public:
    int getLPSLength(string &s)
    {

        vector<int> lfs(s.size(), 0);
        int prefix = 0, suffix = 1;

        while (suffix < s.size())
        {
            if (s[prefix] == s[suffix])
            {
                lfs[suffix] = prefix + 1;
                prefix++;
                suffix++;
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

        return lfs[s.size() - 1];
    }
};