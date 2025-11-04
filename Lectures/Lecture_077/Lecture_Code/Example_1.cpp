#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;

int main()
{
    vector<int> arr(5);

    cout << "Enter the input: ";
    for (int i = 0; i < arr.size(); i++)
        cin >> arr[i];

    ofstream fout;
    fout.open("zero.txt");

    fout << "Original Data\n";
    for (int i = 0; i < arr.size(); i++)
    {
        fout << arr[i] << " ";
    }

    sort(arr.begin(), arr.end());

    fout << "\nSorted Data\n";
    for (int i = 0; i < arr.size(); i++)
    {
        fout << arr[i] << " ";
    }

    return 0;
}