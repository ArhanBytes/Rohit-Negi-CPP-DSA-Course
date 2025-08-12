class Solution {
  public:
    int firstRepeated(vector<int> &arr) {
        // code here
        int size = arr.size();
        const int MAX = 1000001;
        int freq[MAX] = {0};
        
        // calculate the frequency;
        for(int i = 0; i < size; i++)
        {
            freq[arr[i]]++;
        }
        
        // now get the first occurence index
        for(int i = 0; i < size; i++)
        {
           if(freq[arr[i]] > 1)
                return i+1;
        }

        return -1;
    }
};