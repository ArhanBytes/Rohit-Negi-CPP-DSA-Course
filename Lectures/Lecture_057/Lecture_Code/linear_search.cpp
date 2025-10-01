class Solution
{
public:
    int linearSearch(vector<int> &arr, int x, int index, int n)
    {
        // base case
        if (index == n)
            return -1;

        // what to do
        if (arr[index] == x)
            return index;

        // recursive call
        return linearSearch(arr, x, index + 1, n);
    }

    int search(vector<int> &arr, int x)
    {

        return linearSearch(arr, x, 0, arr.size());
    }
};