#include <iostream>
using namespace std;

class Vehicle
{
public:
    Vehicle()
    {
        cout << "This is Vehicle " << endl;
    }
};

class fourWheeler : public Vehicle
{
public:
    fourWheeler()
    {
        cout << "Objects with 4 wheels are vehicles " << endl;
    }
};

class Car : public fourWheeler
{
public:
    Car()
    {
        cout << "Car has 4 Wheels "<<endl;
    }
};

int main()
{
    Car obj;
    return 0;
}