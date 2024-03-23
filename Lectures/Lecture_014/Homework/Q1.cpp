#include <iostream>
using namespace std;

int cube(int n)
{
    return n * n * n;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Cube of " << n << "= " << cube(n) << endl;
}