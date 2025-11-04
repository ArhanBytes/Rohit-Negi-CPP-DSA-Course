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

class FourWheeler
{
public:
    FourWheeler()
    {
        cout << "This is a 4  wheeler Vehicle " << endl;
    }
};

class Car : public Vehicle, public FourWheeler
{
public:
    Car()
    {
        cout << "This is  a Car" << endl;
    }
};

int main()
{
    Car obj;
    return 0;
}
