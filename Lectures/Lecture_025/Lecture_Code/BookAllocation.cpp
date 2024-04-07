class Solution
{
public:
    // Function to find minimum number of pages.
    int findPages(int A[], int N, int M)
    {
        if (M > N)
            return -1;
        int start = A[0], end = 0, mid, ans, pages, count;

        for (int i = 0; i < N; i++)
        {
            end += A[i];
            start = max(A[i], start);
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