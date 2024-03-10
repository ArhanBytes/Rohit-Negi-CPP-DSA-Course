#include <iostream>
using namespace std;

int main()
{
    int n, i = 2;
    cout << "Enter a Number: ";
    cin >> n;

    long long fact = 1;

    while (i <= n)
    {
        fact *= i;
        i++;
    }
    cout << n << "! = " << fact << endl;

    // using DO WHILE
    i = 2;
    fact = 1;
    do
    {
        fact *= i;
        i++;
    } while (i <= n);
    cout << n << "! = " << fact;

    return 0;
}