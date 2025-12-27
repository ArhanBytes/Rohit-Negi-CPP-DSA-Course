class Solution
{
public:
    vector<int> nextGreater(vector<int> &arr)
    {
        stack<int> s;
        int n = arr.size();     // size of array
        vector<int> ans(n, -1); // answer array

        for (int i = 0; i < 2 * n; i++)
        {
            int index = i % n;
            while (!s.empty() && arr[index] > arr[s.top()])
            {
                ans[s.top()] = arr[index];
                s.pop();
            }

            // only push element at first iteration not second
            if (i < n)
                s.push(i);
        }

        return ans;
    }
};