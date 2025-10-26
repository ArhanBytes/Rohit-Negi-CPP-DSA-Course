class Solution
{
public:
    int towerOfHanoi_cal(int n, int source, int helper, int dest)
    {
        // base case
        if (n == 1)
        {
            // one disk source to destination
            return 1;
        }

        // n-1 disk source to helper
        int ans = towerOfHanoi_cal(n - 1, source, dest, helper);
        // moving nth disk from source to destination
        ans += 1;
        // n-1 disk helper to destination
        ans += towerOfHanoi_cal(n - 1, helper, source, dest);

        return ans;
    }

    int towerOfHanoi(int n, int from, int to, int aux)
    {
        // code here
        return towerOfHanoi_cal(n, from, aux, to);
        // return pow(2,n)-1;
    }
};