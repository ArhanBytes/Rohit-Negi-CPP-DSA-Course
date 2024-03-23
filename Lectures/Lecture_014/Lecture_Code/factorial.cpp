#include <iostream>
using namespace std;

int fact(int n = 3) // default parameter
{
    int i, result = 1;
    for (i = 2; i <= n; i++)
    {
        result = result * i;
    }
    return result;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << n << "! = " << fact(n) << endl;
    cout << n - 1 << "! = " << fact(n - 1) << endl;
    cout << n - 2 << "! = " << fact(n - 2) << endl;

    return 0;
}