#include <iostream>
using namespace std;

int main()
{
    int n, pow;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Enter the power: ";
    cin >> pow;

    int ans = 1;

    for (int i = 1; i <= pow; i = i + 1)
    {
        ans = ans * n;
    }

    cout << n << "^" << pow << "=" << ans << endl;
}