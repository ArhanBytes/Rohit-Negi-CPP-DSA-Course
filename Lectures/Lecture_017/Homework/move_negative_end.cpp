class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        vector<int> pos;
        vector<int> neg;
        int size = arr.size();
        
        
        for(int i = 0; i <size; i++)
        {
            if(arr[i] >= 0) // positive  
                pos.push_back(arr[i]);
            else // negative
                neg.push_back(arr[i]);
        }
        
        int i = 0;
        for(int value: pos)
            arr[i++] = value;
        
        for(int value: neg)
            arr[i++] = value;
    }
};