class Solution
{
public:
    int maxDistance(vector<int> &position, int m)
    {
        sort(position.begin(), position.end());
        int ans, mid, n = position.size();
        int start = 1, end = position[n - 1] - position[0];

        while (start <= end)
        {
            mid = start + (end - start) / 2;
            int count = 1, current = position[0];
            for (int i = 1; i < n; i++)
            {
                if (current + mid <= position[i])
                {
                    count++;
                    current = position[i];
                }
            }

            if (count < m)
            {
                end = mid - 1;
            }
            else
            {
                ans = mid;
                start = mid + 1;
            }
        }

        return ans;
    }
};