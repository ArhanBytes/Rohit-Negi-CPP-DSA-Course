#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int row = 3, col = 4;
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    for (int j = 0; j < col; j++)
    {
        // if col is odd
        if (j & 1)
        {
            for (int i = row - 1; i >= 0; i--)
                cout << arr[i][j] << " ";
        }
        // if col is even
        else
        {
            for (int i = 0; i < row; i++)
                cout << arr[i][j] << " ";
        }
    }

    return 0;
}