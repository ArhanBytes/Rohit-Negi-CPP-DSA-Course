#include <iostream>
#include <cmath>
using namespace std;

int countDigit(int n)
{
    int count = 0;
    while (n)
    {
        count++;
        n /= 10;
    }
    return count;
}

bool isArmstrong(int n, int digit)
{
    int originalN = n, ans = 0, rem;
    while (n)
    {
        rem = n % 10;
        ans = pow(rem, digit) + ans;
        n /= 10;
    }

    cout << originalN << " " << ans << endl;
    return originalN == ans;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int digit = countDigit(n);

    if (isArmstrong(n, digit))
        cout << "TRUE";
    else
        cout << "FALSE";

    return 0;
}