class Solution
{
public:
    void rotateMatrix(vector<vector<int>> &mat)
    {
        int n = mat.size();

        for (int i = 0; i < n / 2; i++)
        {
            for (int j = 0; j < n; j++)
            {
                swap(mat[i][j], mat[n - i - 1][n - j - 1]);
            }
        }

        // If n is odd, we need to reverse the middle row
        if (n % 2 == 1)
        {
            int mid = n / 2;
            for (int j = 0; j < n / 2; j++)
            {
                swap(mat[mid][j], mat[mid][n - j - 1]);
            }
        }
    }
};