#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print2Darray(int arr[][4], int row, int col)
{
    // row wise printing
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    int matrix[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int rows = 4, cols = 4;
    
    cout << "Before Reverse: \n";
    print2Darray(matrix, rows, cols);

    for(int col = 0; col < cols; col++)
    {
        int s = 0, e = rows-1;
        while(s < e)
        {
            swap(matrix[s][col],matrix[e][col]);
            s++;
            e--;
        }
    }

    cout << "After Reverse: \n";
    print2Darray(matrix, rows, cols);

    return 0;
}
