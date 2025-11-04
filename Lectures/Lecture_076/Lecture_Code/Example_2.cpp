#include <iostream>
#include<exception>
using namespace std;

/*
class exception
{
protected:
    string msg;

public:
    exception(string msg)
    {
        this->msg = msg;
    }

    string what()
    {
        return msg;
    }
};
*/
int main()
{
    try
    {
        int *p = new int[1000000000000];
        cout << "Memory allocation is successfully\n";
        delete[] p;
    }
    catch (const bad_alloc &e)
    {
        cout << "Exception Occured due to line 9: " << e.what() << endl;
    }
    return 0;
}