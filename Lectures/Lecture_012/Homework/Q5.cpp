#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a Number: ";
    cin >> num;

    int rem, ans = 0, mul = 1;

    // binary to decimal;
    for (; num > 0; num /= 10)
    {
        rem = num % 10;
        ans += rem * mul;
        mul *= 2;
    }

    mul = 1;
    num = ans;
    ans = 0;

    // decimal to octal
    for (; num > 0; num /= 8)
    {
        rem = num % 8;
        ans += rem * mul;
        mul *= 10;
    }

    cout << ans;
    return 0;
}