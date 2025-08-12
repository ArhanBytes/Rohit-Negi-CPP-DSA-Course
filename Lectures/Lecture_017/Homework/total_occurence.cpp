class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        //simple appraoch
        
        int size = arr.size();
        int ans = 0;
        
        for(int i = 0; i < size; i++)
        {
            if(arr[i] == target)
                ans++;
            
            //since it is sorted
            if(arr[i] != target && ans > 0)
                break;
        }
        
        return ans;
        
    }
};