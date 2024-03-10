#include <iostream>
using namespace std;

int main()
{
    int temp;
    cout << "Enter the temperature: ";
    cin >> temp;

    if (temp > 70 && temp < 90)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}