class Solution
{
public:
    int largestRectangleArea(vector<int> &heights)
    {
        int n = heights.size();
        stack<int> st;
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            // find the next smallest
            while (!st.empty() && heights[i] < heights[st.top()])
            {
                int h_index = st.top();
                st.pop();

                if (!st.empty())
                    ans = max(ans, heights[h_index] * (i - st.top() - 1));
                else
                    ans = max(ans, heights[h_index] * i);
            }

            st.push(i);
        }

        // kuch element stack ma reh jayinga yeah woh hai jinka next smallest nth hoga
        while (!st.empty())
        {
            int h_index = st.top();
            st.pop();
            if (!st.empty())
                ans = max(ans, heights[h_index] * (n - st.top() - 1));
            else
                ans = max(ans, heights[h_index] * n);
        }

        return ans;
    }

    int maximalRectangle(vector<vector<char>> &matrix)
    {
        int rows = matrix.size();
        int cols = matrix[0].size();

        vector<int> heights(cols, 0);
        int ans = 0;

        for (int i = 0; i < rows; i++)
        {
            // 1: Make the heights vector for each row
            for (int j = 0; j < cols; j++)
            {
                if (matrix[i][j] == '0')
                    heights[j] = 0;
                else
                    heights[j] += 1;
            }
            // 2: find the largest rectangle area from the histogram(vector)
            int area = largestRectangleArea(heights);
            ans = max(ans, area);
        }

        return ans;
    }
};