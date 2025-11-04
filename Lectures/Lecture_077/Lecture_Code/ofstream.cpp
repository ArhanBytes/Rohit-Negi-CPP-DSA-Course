#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // to open a file
    ofstream fout; // object
    fout.open("zoom.txt"); // create the file and then open it if it is not present
    fout << "Hello India";

    fout.close(); // to release to resources which are handling the files

    return 0;
}