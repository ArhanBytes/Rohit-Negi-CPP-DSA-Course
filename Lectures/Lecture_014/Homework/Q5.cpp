#include <iostream>
using namespace std;

void print(int n)
{
    for (int i = 1; i <= n; i++)
        cout << "Hello  Coder army " << endl;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    print(n);

    return 0;
}