#include <iostream>
using namespace std;

int Sum(int num)
{
    // base case
    if (num == 0)
        return 0;

    return num * num * num + Sum(num - 1);
}

int main()
{
    int N = 4;
    if (N >= 0)
        cout << "Sum of cubes " << N << " natural numbers = " << Sum(N);
    else
        cout << "Sum ain't possible mate.. ";
    return 0;
}