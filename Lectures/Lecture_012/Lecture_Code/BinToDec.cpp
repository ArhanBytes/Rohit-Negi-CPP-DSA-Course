#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a Number: ";
    cin >> num;

    int rem, ans = 0, mul = 1;

    while (num)
    {
        // reminder
        rem = num % 10;
        // num ko divide kar do
        num /= 10;
        // ans
        ans += rem * mul;
        // mul
        mul *= 2;
    }

    cout << ans;
    return 0;
}