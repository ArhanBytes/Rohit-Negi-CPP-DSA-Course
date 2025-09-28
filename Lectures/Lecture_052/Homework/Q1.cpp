#include <iostream>
using namespace std;

void printOdd(int num)
{
    if (num == 1)
    {
        cout << num << " ";
        return;
    }

    printOdd(num - 2);
    cout << num << " ";
}

void printOdd(int num, int N)
{
    if (num > N)
        return;
    cout << num << " ";
    printOdd(num + 2, N);
}

int main()
{
    int N = 34;
    printOdd(1, N); // two argument

    if (!(N & 1))
        N--;
    cout << endl;

    printOdd(N); // one argument
    return 0;
}