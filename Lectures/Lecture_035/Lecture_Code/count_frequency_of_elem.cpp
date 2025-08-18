class Solution
{
public:
    // Function to count the frequency of all elements from 1 to N in the array.
    vector<int> frequencyCount(vector<int> &arr)
    {
        // code here
        int n = arr.size();

        for (int i = 0; i < n; i++)
            arr[i] = arr[i] - 1;

        for (int i = 0; i < n; i++)
            arr[arr[i] % n] = arr[arr[i] % n] + n;

        for (int i = 0; i < n; i++)
            arr[i] = arr[i] / n;

        return arr;
    }
};
