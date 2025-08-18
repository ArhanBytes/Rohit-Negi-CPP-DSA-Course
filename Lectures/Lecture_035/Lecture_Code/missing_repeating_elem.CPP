class Solution
{
public:
    vector<int> findTwoElement(vector<int> &arr)
    {
        // code here
        int n = arr.size();
        int missing, repeating;
        for (int i = 0; i < n; i++)
        {
            arr[i] = arr[i] - 1;
        }

        for (int i = 0; i < n; i++)
        {
            arr[arr[i] % n] = arr[arr[i] % n] + n;
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i] / n == 0)
                missing = i + 1;
            if (arr[i] / n > 1)
                repeating = i + 1;
        }

        return {repeating, missing};
    }
};