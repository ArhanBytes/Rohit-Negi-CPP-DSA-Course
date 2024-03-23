class Solution
{
public:
    int bitwiseComplement(int n)
    {
        if (n == 0)
            return 1;
        int ans = 0, rem, mul = 1;
        while (n)
        {
            rem = (n & 1) ^ 1;
            ans += rem * mul;
            mul *= 2;
            n = n >> 1;
        }

        return ans;
    }
};