class Solution
{
public:
    int findKthPositive(vector<int> &arr, int k)
    {
        int n = arr.size(), count = 0, nos = 1, i = 0, missedNumber = -1;
        while (k != count)
        {
            if (arr[i] == nos)
            {
                i++;
                nos++;
            }
            else
            {
                count++;
                missedNumber = nos++;
            }
            if (i == n)
            {
                missedNumber = nos + (k - count) - 1;
                break;
            }
        }

        return missedNumber;
    }
};