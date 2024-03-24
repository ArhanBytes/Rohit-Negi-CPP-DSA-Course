class Solution
{
public:
    int trailingZeroes(int N)
    {
        int noOfzero = 0;
        while (N >= 5)
        {
            noOfzero = N / 5 + noOfzero;
            N /= 5;
        }
        return noOfzero;
    }
};
