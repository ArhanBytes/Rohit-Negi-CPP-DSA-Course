#include <iostream>
using namespace std;

int main()
{
    int row, col;
    char name;
    int n = 4;

    for (row = 1; row <= n; row = row + 1)
    {
        for (col = 1; col <= (n - row + 1); col = col + 1)
        {
            name = 'A' + col - 1;
            cout << name << " ";
        }
        cout << endl;
    }
}