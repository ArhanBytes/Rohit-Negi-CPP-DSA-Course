#include <iostream>
using namespace std;

class Customer
{
    string name;
    int *data;

public:
    // Constructor
    Customer()
    {
        cout << "Constructor is called\n";
        name = "Arhan";
        data = new int;
        *data = 10;
    }
    // Destructor
    ~Customer()
    {
        delete data;
        cout << "Destructor is called\n";
    }
};

int main()
{
    Customer A1;
}