class Solution
{
public:
    bool isUgly(int n)
    {
        if (n <= 0)
            return 0;

        int i = 2;

        while (n > 1)
        {
            if (n % i == 0)
            {
                n /= i;
            }
            else
            {
                i++;
            }
            if (i > 5)
                return 0;
        }

        return 1;
    }
};