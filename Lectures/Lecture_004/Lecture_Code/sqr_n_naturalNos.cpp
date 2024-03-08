#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int count = 1; count <= n; count = count + 1)
    {
        cout << count << "^2 = " << count * count << endl;
    }
    return 0;
}