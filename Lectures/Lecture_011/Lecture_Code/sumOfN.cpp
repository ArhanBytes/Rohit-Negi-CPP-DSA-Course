#include <iostream>
using namespace std;

int main()
{
    int i = 1, sum = 0, n;
    cout << "Enter a number: ";
    cin >> n;

    do
    {
        sum += i;
        i++;
    } while (i <= n);

    cout << "Sum: " << sum << endl;

    return 0;
}