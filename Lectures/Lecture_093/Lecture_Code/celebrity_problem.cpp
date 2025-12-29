class Solution
{
public:
    int celebrity(vector<vector<int>> &mat)
    {

        stack<int> st;
        int n = mat.size();
        for (int i = 0; i < n; i++)
            st.push(i);

        int first, second;
        while (st.size() > 1)
        {
            first = st.top();
            st.pop();
            second = st.top();
            st.pop();

            if (mat[first][second] == 1 && mat[second][first] == 0)
                st.push(second);

            if (mat[first][second] == 0 && mat[second][first] == 1)
                st.push(first);
        }

        if (st.empty())
            return -1;

        int row = 0;
        int col = 0;

        int num = st.top();

        for (int i = 0; i < n; i++)
        {
            row += mat[num][i];
            col += mat[i][num];
        }

        return (row == 1 && col == n) ? num : -1;
    }
};