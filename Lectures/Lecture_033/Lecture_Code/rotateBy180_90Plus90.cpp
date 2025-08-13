class Solution
{
public:
    void rotateMatrix(vector<vector<int>> &mat)
    {
        int n = mat.size();
        // ------------first 90 degree------------

        // first take transpose
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
                swap(mat[i][j], mat[j][i]);
        }

        // second reverse each row
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

        // ------------second 90 degree------------
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
                swap(mat[i][j], mat[j][i]);
        }

        // second reverse each row

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
    }
};