#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int sum = 0;

    // METHOD 1:
    for (int i = 1; i <= n; i = i + 1)
    {
        sum = sum + (i * i);
    }

    // METHOD 2:
    sum = (n * (n + 1) * ((2 * n) + 1)) / 6;

    cout << "Sum Of square: " << sum << endl;
}