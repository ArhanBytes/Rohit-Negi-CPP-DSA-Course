class Solution
{
public:
    int cubeRoot(int N)
    {
        if (N < 2)
            return N;
        int start = 0, end = N, ans, mid;

        while (start <= end)
        {
            mid = start + ((end - start) / 2);
            if (mid == N / (mid * mid))
                return mid;
            else if (mid < N / (mid * mid))
            {
                start = mid + 1;
                ans = mid;
            }
            else
                end = mid - 1;
        }
        return ans;
    }
};