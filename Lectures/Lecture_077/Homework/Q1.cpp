#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    // Step 1: Read numbers from the file
    ifstream fin("z2.txt");

    vector<int> numbers;
    int num;
    while (fin >> num)
    {
        numbers.push_back(num);
    }
    fin.close();

    ofstream fout("z2.txt");

    fout << "Unsorted Numbers:" << endl;
    for (int i = 0; i < numbers.size(); i++ )
        fout << numbers[i] << " ";


    // Step 2: Sort the the vector
    sort(numbers.begin(), numbers.end());

    // Step 3: Write sorted numbers back to the file

    fout << "\nSorted Numbers:" << endl;

    for (int i = 0; i < numbers.size(); i++ )
        fout << numbers[i] << " ";

    fout.close();

    return 0;
}
