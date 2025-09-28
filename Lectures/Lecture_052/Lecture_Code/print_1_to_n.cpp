#include <iostream>
using namespace std;

void print(int num)
{
    if (num == 1)
    {
        cout << num << " ";
        return;
    }

    print(num - 1);
    cout << num << " ";
}

void print(int num, int N)
{
    if (num == N)
    {
        cout << num << " ";
        return;
    }
    cout << num << " ";
    print(num + 1, N);
}

int main()
{
    // Printing 1 to N
    int N = 10;
    // print(1,N); // two argument
    print(N); // one argument
    return 0;
}