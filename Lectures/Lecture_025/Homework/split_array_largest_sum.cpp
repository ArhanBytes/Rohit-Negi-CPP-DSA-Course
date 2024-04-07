class Solution
{
public:
    int splitArray(int arr[], int N, int K)
    {
        int start = arr[0], end = 0, mid, ans;

        for (int i = 0; i < N; i++)
        {
            end += arr[i];
            start = max(arr[i], start);
        }

        while (start <= end)
        {
            mid = start + (end - start) / 2;
            int subArraySum = 0, count = 1;

            for (int i = 0; i < N; i++)
            {
                subArraySum += arr[i];
                if (subArraySum > mid)
                {
                    count++;
                    subArraySum = arr[i];
                }
            }

            if (count <= K)
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