#include <iostream>
using namespace std;

bool Prime(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (Prime(n))
        cout << "Prime";
    else
        cout << "Not Prime";

    return 0;
}