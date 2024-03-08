#include <iostream>
using namespace std;

int main()
{
    //1: Not ask for taking input
    //2: there is no need for checking both are equal or not as it is already given
    // It is done for practice only.
    
    int n1, n2;
    cout << "Enter the first Number: ";
    cin >> n1;
    cout << "Enter the second Number: ";
    cin >> n2;

    if (n1 == n2)
    {
        cout << "Both number can't be same" << endl;
    }
    else
    {
        if (n1 > n2)
            cout << "Bigger Number:  " << n1 << endl;
        else
            cout << "Bigger Number: " << n2 << endl;
    }
}