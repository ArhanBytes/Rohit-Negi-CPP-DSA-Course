#include <iostream>
using namespace std;

int main()
{
    int row;
    char col;

    // METHOD 1:
    for (row = 1; row <= 5; row = row + 1)
    {
        for (col = 'F'; col <= 'K'; col = col + 1)
        {
            cout << col << " ";
        }
        cout << endl;
    }

    // METHOD 2:
    /*
    int row, col;
    char name;
    for (row = 1; row <= 5; row = row + 1)
    {
        for (col = 1; col <= 6; col = col + 1)
        {
            name = 'F' + col - 1;
            cout << name << " ";
        }
        cout << endl;
    }
    */
}