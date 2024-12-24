#include <iostream>
#include <algorithm>
using namespace std;

void print2Darray(int arr[][4], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}

void reverseRow(int arr[][4], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        int start = 0;
        int end = col - 1;
        while (start < end)
        {
            swap(arr[i][start], arr[i][end]);
            start++;
            end--;
        }
    }
}

int main()
{
    int arr1[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};

    cout << "Array Before: \n";
    print2Darray(arr1, 4, 4);

    reverseRow(arr1, 4, 4);

    cout << "Array After: \n";
    print2Darray(arr1, 4, 4);
}