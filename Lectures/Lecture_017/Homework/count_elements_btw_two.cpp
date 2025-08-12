class Solution {
  public:
    int getCount(vector<int> &arr, int num1, int num2) {
        
        int size = arr.size(), leftIndex = -1, rightIndex = -1;
        
        // for left most index
        for(int i = 0; i < size; i++)
        {
            if(arr[i] == num1)
            {
                leftIndex = i;
                break;
            }
        }
        
        // for right most index
        for(int i = size-1; i >= 0; i--)
        {
            if(arr[i] == num2)
            {
                rightIndex = i;
                break;
            }
        }
        
        int ans = rightIndex - leftIndex - 1;
        if (ans < 0) return 0;
        return ans;
    }
};