#include <iostream>
using namespace std;

int power_of_2(int num)
{
    if (num == 0)
        return 1;
    return 2 * power_of_2(num - 1);
}

int main()
{
    int N = 5;
    if (N >= 0)
        cout << "2^" << N << " = " << power_of_2(N);
    else
        cout << "Sum ain't possible mate.. ";
    return 0;
}