#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    // METHOD 1: BY LOOP
    int sum = 0;
    for (int i = 1; i <= n; i = i + 1)
    {
        sum = sum + i;
    }

    // METHOD 2: BY FORMULA
    sum = (n * (n + 1)) / 2;

    cout << "Sum: " << sum << endl;

    return 0;
}