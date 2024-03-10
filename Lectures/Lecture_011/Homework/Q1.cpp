#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a Number: ";
    cin >> n;

    int i = 2;

    cout << "Even Nos b/w 1-" << n << ": ";
    // using WHILE
    while (i <= n)
    {
        if (i % 2 == 0)
            cout << i << " ";
        i++;
    }

    cout << endl;
    
    // using DO WHILE
    i = 2;
    cout << "Even Nos b/w 1-" << n << ": ";
    do
    {
        if (i % 2 == 0)
            cout << i << " ";
        i++;
    } while (i <= n);

    return 0;
}