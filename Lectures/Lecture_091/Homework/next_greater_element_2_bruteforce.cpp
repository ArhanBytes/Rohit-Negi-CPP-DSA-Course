class Solution {
  public:
    vector<int> nextGreater(vector<int> &arr) {
        int n = arr.size();
        vector<int>ans(n,-1);
        
        for(int i = 0; i < n; i++)
        {
            // our search is start from the next element for greater
            int index = (i+1)%n;
            
            // we are searching from after ith element to before ith element ignoring the ith element so n-1 times
            int times = n-1;
            while(times--)
            {
                if(arr[index] > arr[i])
                {
                    ans[i] = arr[index];
                    break;
                }
                
                index = (index + 1)%n;
            }
        }
        
        return ans;
        
    }
};

// This code will give you TLE