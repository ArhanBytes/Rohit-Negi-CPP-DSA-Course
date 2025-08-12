#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // 1: creating 2D vector
    int rows = 3, col = 4;
    vector<vector<int>> matrix(rows, vector<int>(col, 1));

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }

    cout << "No of rows = " << matrix.size();
    cout << "No of col = " << matrix[0].size();
}