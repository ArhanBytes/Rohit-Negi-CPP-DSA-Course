class Solution
{
public:
    vector<vector<int>> generateMatrix(int n)
    {
        vector<vector<int>> mat(n, vector<int>(n, 0));
        int top = 0, right = n - 1, bottom = n - 1, left = 0;
        int num = 1;

        while (top <= bottom && left <= right)
        {
            // for top
            for (int i = left; i <= right; i++)
                mat[top][i] = num++;
            top++;

            // for right
            for (int i = top; i <= bottom; i++)
                mat[i][right] = num++;
            right--;

            // for bottom
            if (top <= bottom)
            {
                for (int i = right; i >= left; i--)
                    mat[bottom][i] = num++;
                bottom--;
            }

            // for left
            if (left <= right)
            {
                for (int i = bottom; i >= top; i--)
                    mat[i][left] = num++;
                left++;
            }
        }

        return mat;
    }
};