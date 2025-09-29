
class Solution
{
public:
    // Function to count the number of ways in which frog can reach the top.
    int countWays(int n)
    {
        // base case
        if (n == 0)
            return 1;
        if (n <= 2)
            return n;

        // recursive function
        return countWays(n - 3) + countWays(n - 2) + countWays(n - 1);
    }
};
