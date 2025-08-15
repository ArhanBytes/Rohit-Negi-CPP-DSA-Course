class Solution
{
public:
    int rowWithMax1s(vector<vector<int>> &arr)
    {
        int rows = arr.size(), cols = arr[0].size();

        int index = -1;

        int i = 0, j = cols - 1;

        while (i < rows && j >= 0)
        {
            if (arr[i][j]) // 1 appears move to left and store that row
            {
                j--;
                index = i;
            }
            else // 0 appears then move down
                i++;
        }
        return index;
    }
};