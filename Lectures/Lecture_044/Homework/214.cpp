class Solution
{
public:
    string shortestPalindrome(string s)
    {
        string rev = s;
        // reverseing the string
        reverse(rev.begin(), rev.end());

        string originalString = s;
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

        int times = size - lps[s.size() - 1];
        string add_to_start = "";
        int i = 0;
        while (times)
        {
            add_to_start += rev[i];
            i++;
            times--;
        }

        return add_to_start + originalString;
    }
};