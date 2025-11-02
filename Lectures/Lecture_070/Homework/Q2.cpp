#include <iostream>
using namespace std;

class Car
{
public:
    string model;
    int year;
    double fuelLevel; // liters
    int speed;        // km/h
    int tankCapacity; // extra added, in liters
    bool isRunning;

    void startEngine()
    {
        isRunning = true;
        cout << "The engine has been activated" << endl;
    }

    void stopEngine()
    {
        isRunning = false;
        speed = 0; // edge case
        cout << "The engine has been deactivated" << endl;
    }

    void accelerate(int amount)
    {
        if (isRunning && fuelLevel > 0)
        {
            speed += amount;
            cout << "Current Speed: " << speed << endl;
            return;
        }
        cout << "Either engine is off or fuel has been out" << endl;
    }

    void brake(int amount)
    {
        if (speed - amount >= 0)
        {
            speed -= amount;
            cout << "Speed after break: " << speed << endl;
            return;
        }
        cout << "Invalid amount" << endl;
    }

    void refuel(int amount)
    {
        if (fuelLevel + amount <= tankCapacity)
        {
            fuelLevel += amount;
            cout << "Fuel Level after refuel: " << fuelLevel << endl;
            return;
        }

        cout << "it's reached over tank's capacity" << endl;
    }

    void printStatus()
    {
        cout << "\nCar Status: " << endl;
        cout << "\nModel: " << model << "\nSpeed: " << speed << " km/h\nFuel Level: " << fuelLevel << " litres\nRunning state: " << isRunning << endl
             << endl;
    }
};
int main()
{
    Car c1 = {"BMW M5 CS", 2021, 12, 0, 76, false};
    // let's ride
    c1.startEngine();
    c1.accelerate(90); // 90km/h
    c1.brake(20);      // 20km/h

    // let's fuel up but before stop the vehicle
    c1.stopEngine(); // here speed becomes zero
    c1.refuel(30);   // 30 liters

    // let's ride again
    c1.startEngine();
    c1.accelerate(100); // 100 km/h

    c1.printStatus();

    return 0;
}