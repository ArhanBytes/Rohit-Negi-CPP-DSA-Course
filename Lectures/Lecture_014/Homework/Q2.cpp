#include <iostream>
using namespace std;

int rev(int n)
{
    int ans = 0;
    while (n)
    {
        ans = (n % 10) + ans * 10;
        n /= 10;
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Reverse of " << n << "= " << rev(n) << endl;
}