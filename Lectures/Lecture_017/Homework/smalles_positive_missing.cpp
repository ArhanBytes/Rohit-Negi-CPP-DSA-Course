class Solution {
  public:
    int missingNumber(vector<int> &arr) {
        int size = arr.size();
        vector<bool>isVisited(size, false);
        
        for(int i = 0; i < size; i++)  
        {
            if(arr[i] >= 1 && arr[i] <= size)
            {
                isVisited[arr[i]-1] = true;
             }
        }
        
        for(int i = 0; i < size; i++)
        {
            if(isVisited[i] == false)
                return i+1;
        }
        
        return size + 1;
    }
};