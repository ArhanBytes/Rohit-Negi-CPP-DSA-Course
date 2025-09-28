#include <iostream>
using namespace std;

bool isPrime(int num, int N)
{
    // base case
    if (num == N)
        return true;

    if (N % num == 0)
        return false;
    else
        return isPrime(num + 1, N);
}

int main()
{
    int N = 10;
    if (N >= 0)
        cout << "is " << N << " is a Prime? " << (isPrime(2, N) ? "Yes" : "No");
    else
        cout << "Ain't possible mate.. ";
    return 0;
}