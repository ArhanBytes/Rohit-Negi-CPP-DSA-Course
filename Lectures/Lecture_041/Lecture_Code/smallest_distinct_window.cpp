class Solution
{
public:
    int findSubString(string &str)
    {
        // code here
        vector<int> count(256, 0);
        int diff = 0;

        // identifying unique charactorts
        for (int i = 0; i < str.size(); i++)
        {
            if (count[str[i]] == 0)
                diff++;

            count[str[i]]++;
        }

        // updating values to zero
        for (int i = 0; i < 256; i++)
            count[i] = 0;

        int i = 0, j = 0, len = str.size();

        while (j < str.size())
        {
            // when there is difference
            while (diff && j < str.size())
            {
                if (count[str[j]] == 0)
                    diff--;

                count[str[j]]++;
                j++;
            }

            while (diff != 1)
            {
                len = min(len, j - i);
                count[str[i]]--;

                if (count[str[i]] == 0)
                    diff++;

                i++;
            }
        }

        return len;
    }
};