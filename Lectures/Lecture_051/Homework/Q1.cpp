#include <iostream>
using namespace std;

void print(int n)
{
    if (n == 1)
    {
        cout << n << " Coder Army" << endl;
        return;
    }

    cout << n << " Coder Army" << endl;
    print(n - 1);
}

int main()
{
    print(10);
    return 0;
}