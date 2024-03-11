#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a Number: ";
    cin >> num;

    int rem, ans = 0, mul = 1;

    for (; num > 0; num /= 8)
    {
        rem = num % 8;
        ans += rem * mul;
        mul *= 10;
    }

    cout << ans;
    return 0;
}