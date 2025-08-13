class Solution
{
public:
    void rotateMatrix(vector<vector<int>> &mat)
    {
        // code here
        int n = mat.size();

        // first taking transpose
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
                swap(mat[i][j], mat[j][i]);
        }

        // second column reverse
        int s, e;
        for (int j = 0; j < n; j++)
        {
            s = 0, e = n - 1;
            while (s < e)
            {
                swap(mat[s][j], mat[e][j]);
                s++;
                e--;
            }
        }
    }
};