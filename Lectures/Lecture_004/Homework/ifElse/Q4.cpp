#include <iostream>
using namespace std;

int main()
{
    int age;
    cin >> age;
    if (age > 0)
    {
        if (age < 12)
            cout << "Yes" << endl;
        else if (age > 65)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    else
    {
        cout << "Age Is not Valid" << endl;
    }

    return 0;
}