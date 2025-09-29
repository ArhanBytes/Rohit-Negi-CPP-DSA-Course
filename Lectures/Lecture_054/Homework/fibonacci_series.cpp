class Solution
{
public:
    const int MOD = 1e9 + 7;

    vector<int> Series(int n)
    {
        // Code here
        // base case
        if (n == 0)
            return {0};
        if (n == 1)
            return {0, 1};

        // moving backward by 1: Recusrive cal
        vector<int> ans = Series(n - 1);

        // add the nth Fibonacci term
        int size = ans.size();
        ans.push_back((ans[size - 1] + ans[size - 2]) % MOD);
        return ans;
    }
};