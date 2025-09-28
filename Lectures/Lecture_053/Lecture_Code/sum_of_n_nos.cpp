#include <iostream>
using namespace std;

int Sum(int num)
{
    if (num == 0)
        return 0;
    return Sum(num - 1) + num;
}
int main()
{
    int N = 5;
    if (N >= 0)
        cout << "Sum of " << N << " numbers = " << Sum(N);
    else
        cout << "Sum ain't possible mate.. ";
    return 0;
}