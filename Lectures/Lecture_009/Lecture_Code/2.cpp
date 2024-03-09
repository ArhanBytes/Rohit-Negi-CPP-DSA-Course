#include <iostream>
using namespace std;

int main()
{
    int row, col, n;
    cout << "Input the number: ";
    cin >> n;

    for (row = 1; row <= n; row = row + 1)
    {
        // space print
        for (col = 1; col <= (n - row); col = col + 1)
            cout << "  ";

        // no's ( 1 to row ) Print
        for (col = 1; col <= row; col = col + 1)
            cout << col << " ";

        // no's ( row-1 to 1 ) Print
        for (col = row - 1; col >= 1; col = col - 1)
            cout << col << " ";
        cout << endl;
    }
}