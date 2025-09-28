#include <iostream>
using namespace std;

void printEven(int num)
{
    if (num == 2)
    {
        cout << num << " ";
        return;
    }

    printEven(num - 2);
    cout << num << " ";
}

void printEven(int num, int N)
{
    if (num > N)
        return;
    cout << num << " ";
    printEven(num + 2, N);
}

int main()
{
    int N = 31;
    printEven(2, N); // two argument

    if (N & 1)
        N--;
    cout << endl;

    printEven(N); // one argument
    return 0;
}