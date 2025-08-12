class Solution {
public:
    int specialArray(vector<int>& nums) {
        int size = nums.size(), count;
        int start = 0, end = size, mid;

        while (start <= end) {
            mid = start + (end - start) / 2;
            count = 0;

            for (int i = 0; i < size; i++) {
                if (nums[i] >= mid)
                    count++;
            }

            if (mid == count)
                return mid;
            else if (mid < count)
                start = mid + 1;
            else
                end = mid - 1;
        }

        return -1;
    }
};