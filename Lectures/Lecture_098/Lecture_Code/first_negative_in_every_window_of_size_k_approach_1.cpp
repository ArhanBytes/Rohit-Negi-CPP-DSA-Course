class Solution
{
public:
    int findNeg(queue<int> &q)
    {
        int neg = 0;
        int s = q.size();
        while (s--)
        {
            if (neg == 0 && q.front() < 0)
                neg = q.front();
            q.push(q.front());
            q.pop();
        }

        return neg;
    }
    vector<int> firstNegInt(vector<int> &arr, int k)
    {
        vector<int> ans;
        queue<int> q;
        int n = arr.size();

        for (int i = 0; i < k - 1; i++)
            q.push(arr[i]);

        for (int i = k - 1; i < n; i++)
        {
            // 1: push into queue
            q.push(arr[i]);
            // 2: find negative and store in ans
            ans.push_back(findNeg(q));
            // 3: pop from queue
            q.pop();
        }

        return ans;
    }
};

