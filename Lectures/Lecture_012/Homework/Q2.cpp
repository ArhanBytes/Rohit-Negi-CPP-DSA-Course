#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a Number: ";
    cin >> num;

    int rem, ans = 0, mul = 1;

    for (; num > 0; num /= 2)
    {
        rem = num & 1;
        ans += rem * mul;
        mul *= 10;
    }

    cout << ans;
    return 0;
}