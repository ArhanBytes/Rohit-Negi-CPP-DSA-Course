class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        // first take transpose
        for(int i = 0; i < n-1; i++)
        {
            for(int j = i+1; j < n; j++)
                swap(matrix[i][j],matrix[j][i]);
        }

        // second reverse each row
        int s, e;
        for(int i = 0; i < n; i++)
        {
            s = 0, e = n-1;
            while(s < e)
            {
                swap(matrix[i][s],matrix[i][e]);
                s++;
                e--;
            }
        }
    }
};