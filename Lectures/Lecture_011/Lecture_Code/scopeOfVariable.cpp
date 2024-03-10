#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int i = 20;

    // EXAMPLE 1;
    if (i == 30)
    {
        int n = 20;
        cout << n;
    }

    // EXAMPLE 2;
    for (; i <= 30; i++)
        cout << i << " ";
}