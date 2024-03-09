#include <iostream>
using namespace std;

int main()
{
    int row, col, n, space;
    cout << "Input the number: ";
    cin >> n;

    for (row = 1; row <= n; row = row + 1)
    {
        // star print
        for (col = 1; col <= row; col = col + 1)
            cout << "* ";

        // space print
        space = 2 * (n - row);
        for (col = 1; col <= space; col = col + 1)
            cout << "  ";

        // star print
        for (col = 1; col <= row; col = col + 1)
            cout << "* ";

        cout << endl;
    }
    for (row = n-1; row >= 1; row = row - 1)
    {
        // star print
        for (col = 1; col <= row; col = col + 1)
            cout << "* ";

        // space print
        space = 2 * (n - row);
        for (col = 1; col <= space; col = col + 1)
            cout << "  ";

        // star print
        for (col = 1; col <= row; col = col + 1)
            cout << "* ";

        cout << endl;
    }
}