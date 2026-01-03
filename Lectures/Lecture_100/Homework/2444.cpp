// ------------------------bruteforce------------------------
class Solution
{
public:
    long long countSubarrays(vector<int> &nums, int minK, int maxK)
    {
        long long total = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            int mini = INT_MAX;
            int maxi = INT_MIN;
            for (int j = i; j < n; j++)
            {
                mini = min(mini, nums[j]);
                maxi = max(maxi, nums[j]);

                if (maxi == maxK && mini == minK)
                    total++;
            }
        }

        return total;
    }
};

// -----------------USING DEQUE--------------------------
class Solution
{
public:
    long long countSubarrays(vector<int> &nums, int minK, int maxK)
    {
        int n = nums.size();
        deque<int> minDeque, maxDeque;
        long long ans = 0;
        int lastBad = -1;

        for (int i = 0; i < n; i++)
        {
            if (nums[i] < minK || nums[i] > maxK)
            {
                lastBad = i;
                minDeque.clear();
                maxDeque.clear();
                continue;
            }
            
            if (nums[i] == minK)
                minDeque.push_back(i);
            if (nums[i] == maxK)
                maxDeque.push_back(i);

            if (!minDeque.empty() && !maxDeque.empty())
            {
                int validStart = min(minDeque.back(), maxDeque.back());
                ans += max(0, validStart - lastBad);
            }
        }
        return ans;
    }
};
