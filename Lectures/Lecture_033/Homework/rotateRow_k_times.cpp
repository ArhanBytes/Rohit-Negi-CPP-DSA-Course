class Solution
{
public:
    vector<vector<int>> rotateMatrix(int k, vector<vector<int>> mat)
    {
        // code here
        int rows = mat.size();
        int cols = mat[0].size();

        vector<vector<int>> ans(rows, vector<int>(cols));

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
                ans[i][j] = mat[i][(k + j) % cols];
        }

        return ans;
    }
};