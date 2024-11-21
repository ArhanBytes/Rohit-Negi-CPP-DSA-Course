#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool divide(const vector<int> &v)
{
    int prefix = 0, total_sum = 0, n = v.size();

    for (int i = 0; i < n; i++)
        total_sum += v[i];

    for (int i = 0; i < n - 1; i++)
    {
        prefix += v[i];

        if (total_sum == (2 * prefix))
            return 1;
    }

    return 0;
}

int main()
{

    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter the element in array: ";
    for (int i = 0; i < n; i++)
        cin >> v[i];

    if (divide(v))
        cout << "Equal sum possible";
    else
        cout << "Equal sum not possible";
    return 0;
}