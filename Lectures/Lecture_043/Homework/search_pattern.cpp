class Solution
{
public:
    vector<int> search(string &pat, string &txt)
    {
        vector<int> lps(pat.size(), 0);
        // Updating longest prefix suffix vector
        int prefix = 0, suffix = 1;
        while (suffix < pat.size())
        {
            if (pat[prefix] == pat[suffix])
            {
                lps[suffix] = prefix + 1;
                prefix++;
                suffix++;
            }
            else
            {
                if (prefix != 0)
                {
                    prefix = lps[prefix - 1];
                }
                else
                {
                    lps[suffix] = 0;
                    suffix++;
                }
            }
        }

        int f = 0, s = 0;
        vector<int> ans;
        // f and s are pointers that are targeting txt and pat respectively.
        while (f < txt.size())
        {
            if (txt[f] == pat[s])
                f++, s++;
            else
            {
                if (s == 0)
                    f++;
                else
                    s = lps[s - 1];
            }

            if (s == pat.size())
            {
                ans.push_back(f - s);
                s = lps[s - 1];
            }
        }

        return ans;
    }
};