#include <iostream>
#include <vector>
using namespace std;
// pass by value
void passVectorByValue(vector<int> v)
{
    // will not change anything to original vector
    v.clear();
}

// pass by reference
void passVectorByReference(vector<int> &v)
{
    v.push_back(10);
}

int main()
{
    vector<int> v = {0, 1, 8, 5, 3};

    passVectorByValue(v);
    passVectorByReference(v);

    // Printing Vector
    for (auto i : v)
        cout << i << " ";

    return 0;
}