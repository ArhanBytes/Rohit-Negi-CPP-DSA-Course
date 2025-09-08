// User function Template for C++

class Solution
{
public:
    int smallestSubstring(string S)
    {

        int diff = 3, len = S.size(), i = 0, j = 0;
        bool change = false;
        vector<int> mark(3, 0);

        while (j < S.size())
        {
            // if there is element missing then increase the window
            while (diff && j < S.size())
            {
                if (mark[S[j] - '0'] == 0)
                    diff--;

                mark[S[j] - '0']++;
                j++;
            }

            // if all the element is marked then shrink the window

            while (!diff)
            {
                len = min(len, j - i);
                change = true;
                mark[S[i] - '0']--;

                if (mark[S[i] - '0'] == 0)
                    diff++;

                i++;
            }
        }
        return change ? len : -1;
    }
};
