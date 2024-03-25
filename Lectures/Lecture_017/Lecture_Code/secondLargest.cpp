class Solution
{
public:
    // Function returns the second
    // largest elements
    int print2largest(int arr[], int n)
    {
        int ans = -1;
        // Largest element
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > ans)
                ans = arr[i];
        }

        // second largest
        int second = -1;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != ans && arr[i] > second)
                second = arr[i];
        }
        return second;
    }
};