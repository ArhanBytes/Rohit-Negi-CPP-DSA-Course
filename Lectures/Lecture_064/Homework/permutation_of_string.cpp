class Solution
{
public:
    void permutations(string &s1, int index, vector<string> &ans)
    {
        // base case
        if (index == s1.size() - 1)
        {
            ans.push_back(s1);
            return;
        }

        // recursive appraoch
        bool repeat[26] = {false};
        for (int i = index; i < s1.size(); i++)
        {
            if (repeat[s1[i] - 'A'] == 0)
            {
                repeat[s1[i] - 'A'] = 1;
                swap(s1[index], s1[i]);
                permutations(s1, index + 1, ans);
                swap(s1[index], s1[i]);
            }
        }
    }

    vector<string> findPermutation(string &s)
    {

        vector<string> ans;
        permutations(s, 0, ans);

        return ans;
    }
};
