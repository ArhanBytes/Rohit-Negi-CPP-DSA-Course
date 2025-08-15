class Solution
{
public:
    int countZeros(vector<vector<int>> A)
    {
        // code here
        int n = A.size();
        int i = 0, j = n - 1;

        int count = 0;

        while (i < n && j >= 0)
        {
            if (A[i][j]) // if 1 appears
                j--;
            else // if 0 appears
            {
                count += j + 1;
                i++;
            }
        }

        return count;
    }
};