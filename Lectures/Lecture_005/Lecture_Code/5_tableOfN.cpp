#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cout << "Enter a number: ";
    cin >> n;

    // METHOD 1:
    cout << "Table of " << n << ": \n";
    for (i = n; i <= (n * 10); i = i + n)
    {
        // cout << i << endl;
        cout << n << " * " << i / n << " = " << i << endl;
    }
    cout << endl;

    // METHOD 2:
    for (i = 1; i <= 10; i++)
    {
        cout << n << " * " << i << " = " << n * i << endl;
    }

    return 0;
}