class Solution
{
public:
    vector<int> snakePattern(vector<vector<int>> matrix)
    {
        // code here
        int n = matrix.size();
        vector<int> ans;

        for (int i = 0; i < n; i++)
        {
            // if row index is odd then print in reverse
            if (i & 1)
            {
                for (int j = n - 1; j >= 0; j--)
                    ans.push_back(matrix[i][j]);
            }
            // if it is even then print in same order
            else
            {
                for (int j = 0; j < n; j++)
                    ans.push_back(matrix[i][j]);
            }
        }
        return ans;
    }
};