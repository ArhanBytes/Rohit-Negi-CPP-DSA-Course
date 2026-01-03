class Solution
{
public:
    int minKBitFlips(vector<int> &nums, int k)
    {
        int flips = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 0)
            {
                if (i + k > n)
                    return -1;

                for (int j = i; j < i + k; j++)
                    nums[j] = !nums[j];
                flips++;
            }
        }

        return flips;
    }
};
