#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a Number: ";
    cin >> n;

    int i = 1;

    cout << "Odd Nos b/w 1-" << n << ": ";
    // using WHILE
    while (i <= n)
    {
        if (i % 2 == 1)
            cout << i << " ";
        i++;
    }

    cout << endl;

    // using DO WHILE
    i = 1;
    cout << "Odd Nos b/w 1-" << n << ": ";
    do
    {
        if (i % 2 == 1)
            cout << i << " ";
        i++;
    } while (i <= n);

    return 0;
}