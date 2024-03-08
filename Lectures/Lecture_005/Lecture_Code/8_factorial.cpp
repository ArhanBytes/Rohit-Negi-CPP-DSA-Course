#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cout << "Enter the value of n: ";
    cin >> n;

    long long int fact = 1;

    for (i = 2; i <= n; i++)
    {
        fact = fact * i;
    }

    cout << n << "! = " << fact << endl;

    return 0;
}