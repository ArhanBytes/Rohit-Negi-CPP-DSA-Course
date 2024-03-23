class Solution
{
public:
    long long squaresInChessBoard(long long N)
    {
        long long int ans = 0;
        while (N)
        {
            ans += N * N;
            N--;
        }
        return ans;
    }
};