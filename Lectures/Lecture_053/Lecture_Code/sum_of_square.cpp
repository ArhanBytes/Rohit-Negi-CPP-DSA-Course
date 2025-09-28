#include <iostream>
using namespace std;

int Sum(int num)
{
    // base case
    if (num == 0)
        return 0;
        
    return num * num + Sum(num - 1);
}

int main()
{
    int N = 5;
    if (N >= 0)
        cout << "Sum of " << N << " sqaure numbers = " << Sum(N);
    else
        cout << "Sum ain't possible mate.. ";
    return 0;
}