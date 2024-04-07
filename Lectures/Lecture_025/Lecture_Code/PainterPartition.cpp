class Solution
{
public:
    long long minTime(int A[], int N, int M)
    {
        long long start = 0, end = 0, mid, ans, pages, count;

        for (int i = 0; i < N; i++)
        {
            end += A[i];
            if (start < A[i])
                start = A[i];
        }

        while (start <= end)
        {
            mid = start + (end - start) / 2;
            count = 1, pages = 0;

            for (int i = 0; i < N; i++)
            {
                pages += A[i];
                if (pages > mid)
                {
                    count++;
                    pages = A[i];
                }
            }

            if (count <= M)
            {
                ans = mid;
                end = mid - 1;
            }
            else
                start = mid + 1;
        }

        return ans;
    }
};