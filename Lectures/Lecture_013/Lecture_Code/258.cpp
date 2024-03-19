class Solution
{
public:
    int addDigits(int num)
    {
        while (num > 9)
        {
            int rem, ans = 0;
            while (num)
            {
                rem = num % 10;
                ans += rem;
                num /= 10;
            }
            num = ans;
        }
        return num;
    }
};