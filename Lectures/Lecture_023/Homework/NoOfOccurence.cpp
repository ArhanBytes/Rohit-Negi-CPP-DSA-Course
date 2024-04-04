class Solution
{
public:
    /* if x is present in arr[] then returns the count
        of occurrences of x, otherwise returns 0. */
    int count(int arr[], int n, int x)
    {
        int first = -1, last = -1;
        int start = 0, end = n - 1, mid;

        while (start <= end)
        {
            mid = start + ((end - start) / 2);
            if (arr[mid] == x)
            {
                first = mid;
                end = mid - 1;
            }
            else if (arr[mid] < x)
                start = mid + 1;
            else
                end = mid - 1;
        }

        start = 0;
        end = n - 1;

        while (start <= end)
        {
            mid = start + ((end - start) / 2);
            if (arr[mid] == x)
            {
                last = mid;
                start = mid + 1;
            }
            else if (arr[mid] < x)
                start = mid + 1;
            else
                end = mid - 1;
        }

        if (first == -1)
            return 0;

        return last - first + 1;
    }
};