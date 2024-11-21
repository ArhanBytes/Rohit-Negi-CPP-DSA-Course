class Solution
{
public:
    // Function to find the equal sum partition.
    vector<int> EqualSum(vector<int> arr)
    {
        int totalSum = 0, n = arr.size();

        // identify the total sum
        for (int i = 0; i < n; i++)
            totalSum += arr[i];

        int prefix = 0, suffix = 0, x, ans = INT_MAX, index, flag;

        // loop to divide the subarray
        for (int i = 0; i < n - 1; i++)
        {
            prefix += arr[i];           // the first subarray sum
            suffix = totalSum - prefix; // the second sub array sum
            x = suffix - prefix;        // the element which can be fit

            // if element is negative
            if (x < 0)
                x *= -1;

            // only if the element is minimum
            if (x < ans)
            {
                ans = x;
                index = i + 2;
                if (suffix >= prefix)
                    flag = 2;
                else
                    flag = 1;
            }
        }

        return {ans, index, flag};
    }
};