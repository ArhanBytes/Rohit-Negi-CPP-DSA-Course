class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        int rows = matrix.size(), cols = matrix[0].size();
        int top = 0, right = cols - 1, bottom = rows - 1, left = 0;
        vector<int> ans;
        while (top <= bottom && left <= right)
        {
            // for top
            for (int i = left; i <= right; i++)
                ans.push_back(matrix[top][i]);
            top++;

            // for right
            for (int i = top; i <= bottom; i++)
                ans.push_back(matrix[i][right]);
            right--;

            // for bottom
            if (top <= bottom)
            {
                for (int i = right; i >= left; i--)
                    ans.push_back(matrix[bottom][i]);
                bottom--;
            }

            // for left
            if (left <= right)
            {
                for (int i = bottom; i >= top; i--)
                    ans.push_back(matrix[i][left]);
                left++;
            }
        }
        return ans;
    }
};