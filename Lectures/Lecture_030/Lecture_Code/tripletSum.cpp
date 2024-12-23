class Solution
{
public:
    bool hasTripletSum(vector<int> &arr, int target)
    {
        // Your Code Here
        // declaring variables
        int n = arr.size(), find, s, e;

        // sort the vector
        sort(arr.begin(), arr.end());

        // one loop for 1 value
        for (int i = 0; i < n - 2; i++)
        {
            find = target - arr[i];
            s = i + 1, e = n - 1;

            // implement two sum remainaing two value
            while (s < e)
            {
                if (arr[s] + arr[e] == find)
                    return 1;
                else if (arr[s] + arr[e] > find)
                    e--;
                else
                    s++;
            }
        }

        return 0;
    }
};