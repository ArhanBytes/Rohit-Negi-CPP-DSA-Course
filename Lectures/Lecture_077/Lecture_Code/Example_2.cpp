#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("z1.txt");

    fout << "Hello Pakistan\n";
    fout << "Hello Arhan\n";
    fout << "Hello Bhai\n";

    fout.close();

    ifstream fin;
    fin.open("z1.txt");

    string line;
    while (getline(fin, line))
    {
        cout << line << endl;
    }

    return 0;
}