class Solution {
public:
    int trap(vector<int>& height) {
        int size = height.size();
        int s = 0, e = size -1, water = 0;
        int leftmax = 0, rightmax = 0;

        while(s<e)
        {
            if(height[s] < height[e])
            {
                if(leftmax > height[s])
                    water += leftmax - height[s];
                else
                    leftmax = height[s];
                s++;
            }
            else
            {
                if(rightmax > height[e])
                    water += rightmax - height[e];
                else
                    rightmax = height[e];
                e--;
            }
        }
        return water;
    }
};