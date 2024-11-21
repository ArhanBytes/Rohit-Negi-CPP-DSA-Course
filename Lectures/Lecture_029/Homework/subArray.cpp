#include <iostream>
#include <vector>
using namespace std;

void subArray(const vector<int> &v)
{
    for (int i = 1; i <= v.size(); i++)
    {
        cout << "Sub Array of size " << i << ": ";
        for (int j = 0; j <= v.size() - i; j++)
        {
            cout << "[ ";
            for (int k = j; k < j + i; k++)
                cout << v[k] << " ";
            cout << "] ";
        }
        cout << endl;
    }
}

int main()
{
    vector<int> v = {4, 3, 7, 2, 9};

    subArray(v);
    return 0;
}