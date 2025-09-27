#include <iostream>
using namespace std;

void fun(int n)
{
    // base condition
    if (n == 0)
    {
        cout << "Happy Birthday :)" << endl;
        return;
    }

    cout << n << " days remain for birthday..." << endl;

    fun(n - 1);
}

int main()
{
    int n = 19;

    // Iterative version
    /*
    for (int i = 0; i < n; i++)
    {
        cout << i << " days remain for birthday..." << endl;
    }
    cout << "Happy Birthday :)" << endl;
    */

    fun(n);
    return 0;
}