#include <iostream>
using namespace std;

void Prime(int n)
{
    if (n < 2)
    {
        cout << "0" << endl;
        return;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "0" << endl;
            return;
        }
    }
    cout << "1" << endl;
    return;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    Prime(n);

    return 0;
}