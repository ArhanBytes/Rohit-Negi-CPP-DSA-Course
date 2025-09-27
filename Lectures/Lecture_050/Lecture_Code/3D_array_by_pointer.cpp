#include <iostream>
using namespace std;

int main()
{
    int L, B, H;
    cout << "Enter length || Breadth || Height: ";
    cin >> L >> B >> H;

    // CREATING 3D ARRAY
    // FIRST 1D ARRAY OF POINTER WHO POINTS 2D ARRAY
    int ***p = new int **[L];

    // SECOND CREATING 2D ARRAY
    for (int i = 0; i < L; i++)
    {
        *(p + i) = new int *[B];
        for (int j = 0; j < B; j++)
        {
            *(*(p + i) + j) = new int[L];
        }
    }

    // TAKING INPUT
    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < B; j++)
        {
            for (int k = 0; k < H; k++)
                cin >> p[i][j][k];
        }
    }
    cout << "Printing 3D Array: \n";

    // PRINGTING OUTPUT
    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < B; j++)
        {
            for (int k = 0; k < H; k++)
                cout << p[i][j][k] << " ";
            cout << endl;
        }
        cout << endl;
    }

    // RELEASING THE MEMORY
    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < B; j++)
        {
            delete[] *(*(p + i) + j);
        }
        delete[] *(p + i);
    }
    delete[] p;

    return 0;
}