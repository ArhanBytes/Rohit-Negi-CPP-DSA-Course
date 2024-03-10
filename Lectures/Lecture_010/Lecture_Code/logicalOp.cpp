#include <iostream>
using namespace std;

int main()
{
    //-------LOGICAL OP  ------//

    int a, b, c;
    cin >> a >> b >> c;

    // 1: AND operator
    if (a > b && a > c)
        cout << "yes";
    else
        cout << "no";

    // 2: OR operator
    // DONE in vowel_consonent.cpp file

    cout << !123 << endl;
    cout << !0 << endl;

    return 0;
}