class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        stack<int> st;
        vector<int> next_greater(nums2.size(), -1);

        // find the next greater of nums2 array
        for (int i = 0; i < nums2.size(); i++)
        {
            while (!st.empty() && nums2[i] > nums2[st.top()])
            {
                next_greater[st.top()] = nums2[i];
                st.pop();
            }

            st.push(i);
        }

        // put the value of next greater to nums1
        for (int i = 0; i < nums1.size(); i++)
        {
            for (int j = 0; j < nums2.size(); j++)
            {
                if (nums1[i] == nums2[j])
                {
                    nums1[i] = next_greater[j];
                    break;
                }
            }
        }

        return nums1;
    }
};