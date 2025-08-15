#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool binary_Search_Decreasing(vector<vector<int>> &matrix, int target)
{
    int rows = matrix.size(), cols = matrix[0].size();
    int s = 0, e = rows * cols - 1;

    int mid, row_index, col_index;
    while (s <= e)
    {
        mid = s + (e - s) / 2;

        row_index = mid / cols;
        col_index = mid % cols;

        if (matrix[row_index][col_index] == target)
            return 1;
        else if (matrix[row_index][col_index] > target)
            s = mid + 1;
        else
            e = mid - 1;
    }

    return 0;
}

int main()
{
    vector<vector<int>> matrix = {{20, 19, 18, 17}, {16, 15, 14, 13}, {12, 11, 10, 9}, {8, 7, 6, 5}, {4, 3, 2, 1}};

    int target;
    cout << "Enter the value to search: ";
    cin >> target;

    bool ans = binary_Search_Decreasing(matrix, target);

    if (ans)
        cout << "It is present";
    else
        cout << "It is not present";

    return 0;
}