#include <iostream>
using namespace std;

void print(int n)
{
    if (n == 1)
    {
        cout << n << " ";
        return;
    }
    cout << n << " ";
    print(n - 1);
}
int main()
{
    int n = 19;

    print(n);
    return 0;
}