#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a Number: ";
    cin >> num;

    int rem, ans = 0, mul = 1;

    while (num > 0)
    {
        // reminder
        rem = num & 1;
        // qoutient
        num = num >> 2;
        // ans
        ans += rem * mul;
        // mul
        mul *= 10;
    }

    cout << ans;
    return 0;
}