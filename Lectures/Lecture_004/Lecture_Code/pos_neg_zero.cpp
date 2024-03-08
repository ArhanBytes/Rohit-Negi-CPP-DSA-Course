#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a Number: ";
    cin >> n;

    if (n > 0)
        cout << "Positive";
    else if (n == 0)
        cout << "Zero";
    else
        cout << "Negative";

    return 0;
}