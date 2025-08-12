class Solution
{

public:
    vector<int> downwardDiagonal(int N, vector<vector<int>> A)
    {
        // Your code goes here
        vector<int> ans;

        // elements above and including main diagonal
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j <= i; j++)
                ans.push_back(A[j][i - j]);
        }

        // elements below main diagonal
        for (int i = 1; i < N; i++)
        {
            for (int j = i; j < N; j++)
                ans.push_back(A[j][N - j + i - 1]);
        }

        return ans;
    }
};