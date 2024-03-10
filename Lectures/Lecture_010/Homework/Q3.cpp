#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter the age: ";
    cin >> age;

    if (age >= 13 && age <= 19)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}