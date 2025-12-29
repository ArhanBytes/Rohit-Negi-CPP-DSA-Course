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
            // we have found the next smaller
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

        // kuch element stack ma reh jainga
        // yeah woh element honga jo ka end horaha honga at nth position
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
};