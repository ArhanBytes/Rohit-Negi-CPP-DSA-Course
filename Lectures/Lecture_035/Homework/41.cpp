class Solution
{
public:
    int firstMissingPositive(vector<int> &nums)
    {
        int n = nums.size();
        // 1) check if 1 is present if it is not then 1 is answer
        bool isOne = false;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 1)
                isOne = true;
        }

        if (!isOne)
            return 1;

        // if there is 1 Present then we replace out of range element [1,n]
        // to 1 as it will help us to increment on only 0th position as 1 is
        // present and let the other element increase as well
        for (int i = 0; i < n; i++)
        {
            if (nums[i] < 1 || nums[i] > n)
                nums[i] = 1;
        }

        // now we mark index means ith position value reach to it's corresting
        // index and increment n;

        for (int i = 0; i < n; i++)
        {
            nums[(nums[i] - 1) % n] = nums[(nums[i] - 1) % n] + n;
        }

        // now the first element less than n we let the index + 1 answer
        for (int i = 0; i < n; i++)
        {
            if (nums[i] <= n)
                return i + 1;
        }

        // if in the array all element are form 1-n then n+1 is answer
        return n + 1;
    }
};