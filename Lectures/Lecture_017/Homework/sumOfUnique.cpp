class Solution {
public:
    int sumOfUnique(vector<int>& arr) {
        //DECLARING VARAIBLES
        const int MAX = 101;
        int freq[MAX] = {0};
        int size = arr.size();
        int sum = 0;

        // CALCULATE THE FREQUENCY
        for(int i = 0; i < size; i++)
        {
            freq[arr[i]]++;
        }

        //SUM OF UNIQUE
        for(int i = 0; i < size; i++)
        {
            if(freq[arr[i]] == 1)
            {
                sum += arr[i];
            }
        }

        return sum;
    }
};