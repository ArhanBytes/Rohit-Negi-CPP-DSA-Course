class Solution
{
public:
    bool isProduct(vector<int> arr, long long x)
    {
        int s = 0, e = arr.size() - 1;

        // sort the array
        sort(arr.begin(), arr.end());


        while (s < e)
        {
            // to avoid the overflow

            // The LL makes the integer literal of type long long.
            long long ans = 1LL * arr[s] * arr[e];

            // if matches the x
            if (ans == x)
                return 1;
            // if value less than required value
            else if (ans < x)
                s++;
            // if value greater than required value
            else
                e--;
        }

        return 0;
    }
};