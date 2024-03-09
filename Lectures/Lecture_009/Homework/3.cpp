#include <iostream>
using namespace std;

int main()
{
    int row, col, n;
    cout << "Input the number: ";
    cin >> n;
    char name;

    // MEHTOD 2:
    for (row = 1; row <= n; row = row + 1)
    {
        // print space
        for (col = 1; col <= (n - row); col = col + 1)
            cout << "  ";

        // print A to ('A' + row -1)
        for (col = 1; col <= row; col = col + 1)
        {
            name = 'A' + col - 1;
            cout << name << " ";
        }

        // print (('A' + row -1) -1) to 'A'
        for (col = 1; col <= row - 1; col = col + 1)
        {
            // way 1
            // name = ('A' + n - 1) - col;
            // way 2;
            name = name - 1;
            cout << name << " ";
        }
        cout << endl;
    }

    // METHOD 1:
    /*
    for (row = 1; row <= n; row = row + 1)
    {
        // print space
        for (col = 1; col <= (n - row); col = col + 1)
            cout << "  ";

        // print A to ('A' + row -1)
        for (name = 'A'; name <= 'A' + row - 1; name = name + 1)
        {
            cout << name << " ";
        }

        // print (('A' + row -1) -1) to 'A'
        for (name = ('A' + row - 2); name >= 'A'; name = name - 1)
        {
            cout << name << " ";
        }
        cout << endl;
    }
    */

    return 0;
}