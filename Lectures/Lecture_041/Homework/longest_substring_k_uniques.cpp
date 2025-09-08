class Solution
{
public:
    int longestKSubstr(string &s, int k)
    {
        // code here
        int diff = 0, len = -1, i = 0, j = 0;
        int count[26] = {0};

        // diff is showing how many different element are there

        while (j < s.size())
        {
            // making string of less than or equal k distint element
            while (diff <= k && j < s.size())
            {
                if (count[s[j] - 'a'] == 0)
                    diff++;

                count[s[j] - 'a']++;
                j++;

                if (diff == k)
                    len = max(len, j - i);
            }

            // calculating the length

            while (diff > k)
            {
                count[s[i] - 'a']--;

                if (count[s[i] - 'a'] == 0)
                    diff--;

                i++;
            }
        }

        return len;
    }
};