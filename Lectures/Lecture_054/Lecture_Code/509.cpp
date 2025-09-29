class Solution
{
public:
    int fib(int n)
    {
        // base case
        if (n <= 1)
            return n;
        // recursive function
        return fib(n - 1) + fib(n - 2);
    }
};