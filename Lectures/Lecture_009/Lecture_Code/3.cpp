#include <iostream>
using namespace std;

int main()
{
    int row, col, n, space, starRange;
    cout << "Input the number: ";
    cin >> n;

    // Method 1:
    for (row = 1; row <= n; row = row + 1)
    {
        // space print
        space = row - 1;
        for (col = 1; col <= space; col = col + 1)
            cout << "  ";

        // star Print
        starRange = (2 * n - 1) - (space * 2);
        for (col = 1; col <= starRange; col = col + 1)
            cout << "* ";

        cout << endl;
    }

    // Method 2:
    for (row = n; row >= 1; row = row - 1)
    {
        // space print
        space = n - row;
        for (col = 1; col <= space; col = col + 1)
            cout << "  ";

        // star Print
        starRange = 2 * row - 1;
        for (col = 1; col <= starRange; col = col + 1)
            cout << "* ";

        cout << endl;
    }
}