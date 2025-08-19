class Solution
{
public:
    string caseSort(string &s)
    {
        // code here
        int lower[26] = {0};
        int upper[26] = {0};

        // counting upper and lower letters
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'a')
            {
                lower[s[i] - 'a'] += 1;
                s[i] = '#';
            }
            else
            {
                upper[s[i] - 'A'] += 1;
                s[i] = '-';
            }
        }

        // sorting the lower and upper in an string
        string sorted_upper = "";
        string sorted_lower = "";

        for (int i = 0; i < 26; i++)
        {
            while (upper[i])
            {
                sorted_upper += i + 'A';
                upper[i]--;
            }

            while (lower[i])
            {
                sorted_lower += i + 'a';
                lower[i]--;
            }
        }

        // updating the original string;
        int l_index = 0, u_index = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '#')
            {
                s[i] = sorted_lower[l_index];
                l_index++;
            }
            else
            {
                s[i] = sorted_upper[u_index];
                u_index++;
            }
        }

        return s;
    }
};