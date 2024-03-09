#include <iostream>
using namespace std;

int main()
{
    int row, col;
    char name;

    for (row = 1; row <= 6; row = row + 1)
    {
        for (col = 1; col <= row; col = col + 1)
        {
            cout << (10 + col - 1) << " ";
        }
        cout << endl;
    }
}