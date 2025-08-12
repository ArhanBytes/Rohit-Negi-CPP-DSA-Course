class Solution
{
public:
    vector<int> matrixDiagonally(vector<vector<int>> &mat)
    {
        int n = mat.size();
        int range = n * n;
        int i = 0, j = 0; // indecies of row and col
        int k = 0;
        bool isUpward = 1;
        vector<int> ans;

        while (k < range)
        {
            if (isUpward) // down to up
            {
                while (i >= 0 && j < n)
                {
                    ans.push_back(mat[i][j]);
                    i--;
                    j++;
                    k++;
                }

                if (i < 0 && j < n)
                    i = 0;
                if (j == n)
                {
                    i += 2;
                    j -= 1;
                }
            }
            else // up to down
            {
                while (i < n && j >= 0)
                {
                    ans.push_back(mat[i][j]);
                    i++;
                    j--;
                    k++;
                }

                if (i < n && j < 0)
                    j = 0;
                if (i == n)
                {
                    i -= 1;
                    j += 2;
                }
            }

            isUpward = !isUpward;
        }

        return ans;
    }
};