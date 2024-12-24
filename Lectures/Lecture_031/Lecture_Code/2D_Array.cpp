#include <iostream>
using namespace std;

void printColWise(int arr[][4], int row, int col)
{
    // coloum wise printing
    for (int j = 0; j < col; j++)
        for (int i = 0; i < row; i++)
            cout << arr[i][j] << " ";
}

void printRowWise(int arr[][4], int row, int col)
{
    // row wise printing
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            cout << arr[i][j] << " ";
}

bool findElement(int arr[][4], int row, int col, int x)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            if(arr[i][j] == x)
                return 1;
    }
    return 0;
}

int main()
{
    // 1: Creating 2d array
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    /*

    // 2: row wise Printing all the value in array
    printRowWise(arr, 3, 4);

    cout << endl;

    //3: Print all the value in array col wise, function call
    printColWise(arr, 3, 4);

    */

    // 4: find an element in an array
    int x = 0; // finding element
    cout << (findElement(arr, 3, 4, x) ? "Yes" : "No");

    return 0;
}