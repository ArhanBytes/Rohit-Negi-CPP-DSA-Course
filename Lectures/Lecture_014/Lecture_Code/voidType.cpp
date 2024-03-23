#include <iostream>
using namespace std;

void fun()
{
    cout << "Hello coder army" << endl;
}

void sum(int m, int n)
{
    int ans = m + n;
    cout << "Sum: " << ans << endl;
}

int main()
{
    sum(3, 7);
    fun();

    return 0;
}