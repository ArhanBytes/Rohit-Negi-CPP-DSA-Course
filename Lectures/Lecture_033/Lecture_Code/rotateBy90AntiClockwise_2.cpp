class Solution
{
public:
    void rotateMatrix(vector<vector<int>> &mat)
    {
        // code here
        int n = mat.size();

        // row reverse
        int s, e;
        for (int i = 0; i < n; i++)
        {
            s = 0, e = n - 1;
            while (s < e)
            {
                swap(mat[i][s], mat[i][e]);
                s++;
                e--;
            }
        }
        // taking transpose
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
                swap(mat[i][j], mat[j][i]);
        }
    }
};