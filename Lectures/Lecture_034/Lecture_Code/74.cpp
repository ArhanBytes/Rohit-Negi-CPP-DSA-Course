class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int rows = matrix.size(), cols = matrix[0].size();

        int s = 0, e = rows * cols - 1;
        int mid, row_index, col_index;
        while (s <= e)
        {
            mid = s + (e - s) / 2;

            row_index = mid / cols;
            col_index = mid % cols;

            if (matrix[row_index][col_index] == target)
                return 1;
            else if (matrix[row_index][col_index] < target)
                s = mid + 1;
            else
                e = mid - 1;
        }

        return 0;
    }
};