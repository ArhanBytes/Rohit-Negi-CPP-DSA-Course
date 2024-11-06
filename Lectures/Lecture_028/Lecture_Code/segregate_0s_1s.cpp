class Solution
{
public:
    void segregate0and1(vector<int> &arr)
    {
        int start = 0, end = arr.size() - 1;
        while (start < end)
        {
            if (arr[start] == 1 && arr[end] == 0)
            {
                swap(arr[start], arr[end]);
                start++;
                end--;
            }
            else
            {
                if (!arr[start])
                    start++;
                if (arr[end])
                    end--;
            }
        }
    }
};