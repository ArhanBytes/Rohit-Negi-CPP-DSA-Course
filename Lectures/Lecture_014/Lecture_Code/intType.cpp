#include <iostream>
using namespace std;

int sum(int m, int n) // function declare
{
    int ans = m + n; // function define
    return ans;
}

int mul(int m, int n) // function declare
{
    int ans = m * n; // function define
    return ans;
}

int main()
{
    int a, b;
    cout << "Enter 2 Numbers: ";
    cin >> a >> b;

    cout << "Sum: " << sum(a, b) << endl;
    int ans = mul(a, b);

    cout << "Multiple: " << ans;

    return 0;
}