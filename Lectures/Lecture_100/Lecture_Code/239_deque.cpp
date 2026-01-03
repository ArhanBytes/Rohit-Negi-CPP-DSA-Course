class Solution
{
public:
    vector<int> maxSlidingWindow(vector<int> &nums, int k)
    {
        int n = nums.size();
        vector<int> ans(n - k + 1);
        deque<int> dq;

        for (int i = 0; i < k - 1; i++)
        {
            while (!dq.empty() && nums[dq.back()] <= nums[i])
                dq.pop_back();

            dq.push_back(i);
        }

        for (int i = k - 1; i < n; i++)
        {
            // 1: dequeue sa woh element nikalo jo ith element sa chota hai as it wil never be the maximum if we find the greater value in nums[i]
            while (!dq.empty() && nums[dq.back()] <= nums[i])
                dq.pop_back();

            // 2: place the nums[i]th index to queue due to possiblity to maximum in window
            dq.push_back(i);

            // 3: kiya queue ka pahla element is a part of window or not
            if (dq.front() <= i - k)
                dq.pop_front();

            // 4: ab pahla element hi maximum hoga is window ka liya
            ans[i - k + 1] = nums[dq.front()];
        }

        return ans;
    }
};