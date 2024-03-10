#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cout << "Enter the number: ";
    cin >> n;

    if (n < 2)
    {
        cout << "Not Prime";
        return 0;
    }

    i = 2;
    while (i < n)
    {
        if (n % i == 0)
        {
            cout << "Not Prime";
            break;
        }
        i++;
    }

    if (i == n)
    {
        cout << "Prime";
    }

    return 0;
}