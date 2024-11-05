#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = {0, 1, 8, 1, 2, 3, 1, 8, 5, 3};

    // min_element & max_element returns the iterator of min and max
    auto min = min_element(v.begin(), v.end());
    auto max = max_element(v.begin(), v.end());

    cout << "Minimum: " << *min << endl;
    cout << "Maximum: " << *max << endl;

    return 0;
}