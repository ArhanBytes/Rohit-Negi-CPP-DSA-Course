class Solution
{
public:
    void updateLPS(vector<int> &lps, string &b)
    {
        int prefix = 0, suffix = 1;
        while (suffix < b.size())
        {
            if (b[prefix] == b[suffix])
            {
                lps[suffix] = prefix + 1;
                suffix++, prefix++;
            }
            else
            {
                if (prefix == 0)
                    suffix++;
                else
                    prefix = lps[prefix - 1];
            }
        }
    }

    bool KMP_MATCH(string haystack, string needle)
    {
        vector<int> lps(needle.size(), 0);
        updateLPS(lps, needle);

        int first = 0, second = 0;

        while (first < haystack.size() && second < needle.size())
        {
            if (haystack[first] == needle[second])
            {
                first++, second++;
            }
            else
            {
                if (second == 0)
                    first++;
                else
                    second = lps[second - 1];
            }
        }

        if (second == needle.size())
            return 1;
        else
            return 0;
    }

    int repeatedStringMatch(string a, string b)
    {

        // 1: Required Repeatation so it can be substring
        string temp = a;
        int repeat = 1;

        while (temp.size() < b.size())
        {
            temp += a;
            repeat++;
        }

        // 2: KMP search Pattern
        if (KMP_MATCH(temp, b))
            return repeat;

        // 3: if not found then temp+a, KMP search Pattern
        if (KMP_MATCH(temp + a, b))
            return repeat + 1;

        return -1;
    }
};