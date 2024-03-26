class Solution
{
public:
    int missingNumber(vector<int> &array, int n)
    {
        // sum of n number
        int sumOfN = n * (n + 1) / 2;

        // sum of all element in an array
        int sum = 0;
        for (int i = 0; i < n - 1; i++)
        {
            sum += array[i];
        }

        // missing no
        return sumOfN - sum;
    }
};