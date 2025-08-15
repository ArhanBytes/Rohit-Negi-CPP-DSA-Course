class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &mat, int x)
    {
        // code here
        int rows = mat.size(), cols = mat[0].size();

        int s = 0, e = cols - 1;
        while (s < rows && e >= 0)
        {
            if (mat[s][e] == x)
                return 1;
            else if (mat[s][e] > x)
                e--;
            else
                s++;
        }

        return 0;
    }