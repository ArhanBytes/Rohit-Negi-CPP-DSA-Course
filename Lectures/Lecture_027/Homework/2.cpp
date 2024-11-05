#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = {0, 1, 8, 1, 2, 3, 1, 8, 5, 3};
    int key = 3;

    // count is use to identify the number of occurence
    int noOfOccurence = count(v.begin(), v.end(), key);
    cout << "No of Occurence of " << key << ": " << noOfOccurence;

    return 0;
}