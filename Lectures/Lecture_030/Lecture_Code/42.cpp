class Solution
{
public:
    int trap(vector<int> &height)
    {
        int n = height.size(), maxi = height[0], maxIndex = 0, water = 0;

        // indentifying maximum height and it's index
        for (int i = 0; i < n; i++)
        {
            if (maxi < height[i])
            {
                maxi = height[i];
                maxIndex = i;
            }
        }

        // Solving for left part
        int leftMax = 0;
        for (int i = 0; i < maxIndex; i++)
        {
            if (leftMax > height[i])
                water += leftMax - height[i];
            else
                leftMax = height[i];
        }
        // Solving for right part
        int rightMax = 0;
        for (int i = n - 1; i > maxIndex; i--)
        {
            if (rightMax > height[i])
                water += rightMax - height[i];
            else
                rightMax = height[i];
        }

        return water;
    }
};