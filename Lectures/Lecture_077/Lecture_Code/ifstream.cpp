#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin;
    fin.open("zoom.txt");

    char c;
    c = fin.get();

    while (!fin.eof())
    {
        cout << c;
        c = fin.get();
    }
    
    return 0;
}