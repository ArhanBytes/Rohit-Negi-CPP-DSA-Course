class Solution
{
public:
    int largestRectangleArea(vector<int> &heights)
    {
        int n = heights.size();
        vector<int> NSR(n, n);
        vector<int> NSL(n, -1);

        stack<int> st;

        // finding next smaller element on right
        for (int i = 0; i < n; i++)
        {
            while (!st.empty() && heights[i] < heights[st.top()])
            {
                NSR[st.top()] = i;
                st.pop();
            }

            st.push(i);
        }

        // empty the stack
        while (!st.empty())
            st.pop();

        // finding next smaller on left
        for (int i = 0; i < n; i++)
        {
            while (!st.empty() && heights[i] <= heights[st.top()])
                st.pop();

            if (!st.empty())
                NSL[i] = st.top();

            st.push(i);
        }

        // finding largest rectangle
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans = max(ans, heights[i] * (NSR[i] - NSL[i] - 1));
        }

        return ans;
    }
};