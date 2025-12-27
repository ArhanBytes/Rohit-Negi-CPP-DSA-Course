class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
         int n = arr.size();
        vector<int>ans(n,-1);
        
        for(int i = 0; i < n-1; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                if(arr[j] > arr[i])
                {
                    ans[i] = arr[j];
                    break;
                }
            }
        }
        
        return ans;
        
    }
};

// This code will give you TLE