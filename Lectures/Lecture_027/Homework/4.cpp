#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = {0, 1, 8, 1, 2, 1, 8, 5, 3};
    int element;
    cout << "Enter an element: ";
    cin >> element;
    // Lower and Upper bound use binary search to identify the value therefore we need to have sorted vector

    sort(v.begin(), v.end());

    // Lower bound return the iterator of first value that is greater than or equal to given value;
    auto lowerBound = lower_bound(v.begin(), v.end(), element);

    // Upper bound return the iterator of first value that is greater than to given value;
    auto upperBound = upper_bound(v.begin(), v.end(), element);

    cout << "Lower Bound: " << *lowerBound << endl;
    cout << "Upper Bound: " << *upperBound << endl;

    return 0;
}