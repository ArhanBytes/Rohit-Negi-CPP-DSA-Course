class Solution
{
public:
    int minKBitFlips(vector<int> &nums, int k)
    {
        int flips = 0;
        int n = nums.size();
        queue<int> q;

        for (int i = 0; i < n; i++)
        {
            // 1: first look if it is a part of window or not
            if (!q.empty() && q.front() < i)
                q.pop();

            // 1 -> odd time flip -> 0  || 0 -> even times flip -> 0
            if (q.size() % 2 == nums[i])
            {
                // kiya window exist bhi krti hai yeah
                if (i + k > n)
                    return -1;

                q.push(i + k - 1);
                flips++;
            }
        }

        return flips;
    }
};