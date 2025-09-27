#include <iostream>
using namespace std;

int main()
{
    int D, L, B, H;
    cout << "Enter Depth || length || Breadth || Height: ";
    cin >> D >> L >> B >> H;

    // CREATING 4D ARRAY
    int ****p = new int ***[D];

    // CREATING 3D ARRAY
    for (int i = 0; i < D; i++)
    {
        *(p + i) = new int **[L];
        for (int j = 0; j < L; j++)
        {
            *(*(p + i) + j) = new int *[B];
            for (int k = 0; k < B; k++)
            {
                *(*(*(p + i) + j) + k) = new int[H];
            }
        }
    }

    // TAKING INPUT
    for (int i = 0; i < D; i++)
    {
        for (int j = 0; j < L; j++)
        {
            for (int k = 0; k < B; k++)
            {
                for (int m = 0; m < H; m++)
                    cin >> p[i][j][k][m];
            }
        }
    }

    // PRINTING OUTPUT
    cout << "Printing 4D Array: \n";
    for (int i = 0; i < D; i++)
    {
        for (int j = 0; j < L; j++)
        {
            for (int k = 0; k < B; k++)
            {
                cout << "1D ARRAY: ";
                for (int m = 0; m < H; m++)
                    cout << p[i][j][k][m] << " ";
                cout << endl;
            }
            cout << "2D ARRAY Completed..." << endl;
        }
        cout << "3D ARRAY Completed..." << endl;
    }

    // RELEASING THE MEMORY
    for (int i = 0; i < D; i++)
    {
        for (int j = 0; j < L; j++)
        {
            for (int k = 0; k < B; k++)
            {
                delete[] *(*(*(p + i) + j) + k);
            }
            delete[] *(*(p + i) + j);
        }
        delete[] *(p + i);
    }

    delete[] p;

    return 0;
}