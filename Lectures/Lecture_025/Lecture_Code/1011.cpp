class Solution
{
public:
    int shipWithinDays(vector<int> &weights, int days)
    {
        int start = weights[0], end = 0, mid, ans, capacity, count;

        for (int i = 0; i < weights.size(); i++)
        {
            end += weights[i];
            start = max(weights[i], start);
        }

        while (start <= end)
        {
            mid = start + (end - start) / 2;

            capacity = 0, count = 1;
            for (int i = 0; i < weights.size(); i++)
            {
                capacity += weights[i];
                if (capacity > mid)
                {
                    count++;
                    capacity = weights[i];
                }
            }

            if (count <= days)
            {
                ans = mid;
                end = mid - 1;
            }
            else
                start = mid + 1;
        }

        return ans;
    }
};