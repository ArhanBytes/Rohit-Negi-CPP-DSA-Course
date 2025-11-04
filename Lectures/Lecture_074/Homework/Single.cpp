#include <iostream>
using namespace std;

class Vehicle
{
public:
    Vehicle()
    {
        cout << "This is a Vehicle" << endl;
    }
};
// sub class derived from base class
class Car : public Vehicle
{
public:
    Car()
    {
        cout << "This is a Car" << endl;
    }
};
int main()
{
    Car obj;
    return 0;
}