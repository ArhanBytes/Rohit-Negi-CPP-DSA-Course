class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int rows = matrix.size(), cols = matrix[0].size();
        int s = 0, e = rows - 1;

        int mid;
        while (s <= e)
        {
            // column wise binary search
            mid = s + (e - s) / 2;

            if (matrix[mid][0] <= target && target <= matrix[mid][cols - 1])
            {
                // row wise binary search
                int s_row = 0, e_row = cols - 1;
                int mid_row;
                while (s_row <= e_row)
                {
                    mid_row = s_row + (e_row - s_row) / 2;

                    if (matrix[mid][mid_row] == target)
                        return true;
                    else if (matrix[mid][mid_row] < target)
                        s_row = mid_row + 1;
                    else
                        e_row = mid_row - 1;
                }

                return false;
            }
            else if (matrix[mid][0] < target)
                s = mid + 1;
            else
                e = mid - 1;
        }

        return false;
    }
};