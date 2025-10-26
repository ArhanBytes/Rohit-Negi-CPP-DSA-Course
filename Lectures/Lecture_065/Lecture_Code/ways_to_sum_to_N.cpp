class Solution
{
public:
    int no_of_ways(int *arr, int n, int sum)
    {
        // base case
        if (sum == 0)
            return 1;
        if (sum < 0)
            return 0;

        // recursive approach
        long long count = 0;
        for (int i = 0; i < n; i++)
        {
            count += no_of_ways(arr, n, sum - arr[i]);
            count %= 1000000007;
        }

        return count;
    }

    // function to count the total
    // number of ways to sum up to 'N'
    int countWays(int arr[], int m, int N)
    {
        return no_of_ways(arr, m, N);
    }
};
