#include <iostream>
using namespace std;

int factorial(int num)
{
    if (num == 0)
    {
        return 1;
    }

    return num * factorial(num - 1);
}

int main()
{
    int N = 11;
    if (N >= 0)
        cout << N << "! = " << factorial(N);
    else
        cout << "Factorial ain't possible mate.. ";
    return 0;
}