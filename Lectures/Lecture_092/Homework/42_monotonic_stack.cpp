class Solution
{
public:
    int trap(vector<int> &height)
    {
        // BY USING MONOTONIC STACK APPROACH
        // finding the next greater on right and next greater on left
        stack<int> st;
        int n = height.size();
        int total_water = 0;

        for (int i = 0; i < n; i++)
        {
            // next greater on right
            while (!st.empty() && height[i] > height[st.top()])
            {
                // get the  element
                int h_index = st.top();
                st.pop();

                if (st.empty())
                    break;

                int breadth = i - st.top() - 1;
                int length = min(height[i], height[st.top()]) - height[h_index];

                int water_rectangle = length * breadth;
                total_water += water_rectangle;
            }

            st.push(i);
        }

        return total_water;
    }
};