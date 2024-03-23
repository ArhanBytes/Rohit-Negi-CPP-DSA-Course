#include <iostream>
using namespace std;

int fact(int n)
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
    int n, r;
    cout << "Enter n value: ";
    cin >> n;
    cout << "Enter r value: ";
    cin >> r;

    int ncr = fact(n) / (fact(r) * fact(n - r));
    cout << "nCr: " << ncr << endl;

    return 0;
}