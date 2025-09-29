class Solution
{
public:
    int climbStairs(int n)
    {
        /*
        //  Method 1: Recursion
        if (n <= 2)
            return n;
        //recursive function
        return climbStairs(n-2) + climbStairs(n-1);
        */

        // Method 2: Iterative
        long long int t1 = 1, t2 = 2;
        for (int i = 1; i < n; i++)
        {
            long long int temp = t1 + t2;
            t1 = t2;
            t2 = temp;
        }
        return (int)t1;
    }
};