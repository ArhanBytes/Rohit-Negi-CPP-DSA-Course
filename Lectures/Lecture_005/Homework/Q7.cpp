#include <iostream>
using namespace std;

int main()
{

    int nthTerm, i;
    cout << "Term NO: ";
    cin >> nthTerm;

    int last = 0;
    int prev = 1;
    int curr;

    for (i = 1; i < nthTerm; i++)
    {
        curr = last + prev;
        last = prev;
        prev = curr;
    }

    cout << nthTerm << "th Term = " << last << endl;

    return 0;
}