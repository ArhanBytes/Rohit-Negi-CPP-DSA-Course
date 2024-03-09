#include <iostream>
using namespace std;

int main()
{
    int row, col, n;
    cout << "Input the number: ";
    cin >> n;

    char name;

    // METHOD 1;
    for (row = 1; row <= n; row = row + 1)
    {
        // space print
        for (col = 1; col <= (n - row); col = col + 1)
            cout << "  ";

        // Number print
        for (col = 1; col <= row; col = col + 1)
        {
            name = 'A' + col - 1;
            cout << name << " ";
        }

        cout << endl;
    }

    // METHOD 2:
    for (row = 1; row <= n; row = row + 1)
    {
        // space print
        for (col = 1; col <= (n - row); col = col + 1)
            cout << "  ";

        // Number print
        for (name = 'A'; name <= ('A' + row - 1); name = name + 1)
            cout << name << " ";

        cout << endl;
    }
}