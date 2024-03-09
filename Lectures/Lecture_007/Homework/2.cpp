#include <iostream>
using namespace std;

int main()
{
    int row, col;
    char name;

    for (row = 1; row <= 5; row = row + 1)
    {
        for (col = 1; col <= row; col = col + 1)
        {
            name = 'A' + col - 1;
            cout << name << " ";
        }
        cout << endl;
    }
}