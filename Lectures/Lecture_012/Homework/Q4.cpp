#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a Number: ";
    cin >> num;

    int rem, ans = 0, mul = 1;

    for (; num > 0; num /= 10)
    {
        rem = num % 10;
        ans += rem * mul;
        mul *= 8;
    }

    cout << ans;
    return 0;
}