#include <iostream>
using namespace std;

int main()
{
    int row, col;
    int count = 1;
    // METHOD: 1
    for (row = 1; row <= 5; row = row + 1)
    {

        for (col = 1; col <= 5; col = col + 1)
        {
            cout << count << " ";
            count = count + 1;
        }
        cout << endl;
    }

    // METHOD: 2
    for (row = 1; row <= 5; row = row + 1)
    {

        for (col = 1; col <= 5; col = col + 1)
        {
            cout << ((row - 1) * 5 + col) << " ";
        }
        cout << endl;
    }
}