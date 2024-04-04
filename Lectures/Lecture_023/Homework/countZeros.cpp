class Solution
{
public:
    int countZeroes(int arr[], int n)
    {
        int start = 0, end = n - 1, mid, first = -1, last = n - 1;

        while (start <= end)
        {
            mid = start + ((end - start) / 2);
            if (arr[mid] == 0)
            {
                first = mid;
                end = mid - 1;
            }
            else
                start = mid + 1;
        }

        if (first == -1)
            return 0;

        int ans = last - first + 1;

        return ans;
    }
};