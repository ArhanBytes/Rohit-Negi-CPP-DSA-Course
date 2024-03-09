#include <iostream>
using namespace std;

int main()
{
    int row, col;

    // METHOD 1:
    for (row = 1; row <= 5; row = row + 1)
    {
        for (col = 1; col <= (5 - (row - 1)); col = col + 1)
        {
            cout << col << " ";
        }
        cout << endl;
    }

    // METHOD 2:
    for (row = 5; row >= 1; row = row - 1)
    {
        for (col = 1; col <= row; col = col + 1)
        {
            cout << col << " ";
        }
        cout << endl;
    }
}