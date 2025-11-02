#include <iostream>
using namespace std;

class Laptop
{
public:
    string brand;
    double screenSize; // in inches
    string processor;
    int ram;
    int storage;
    double batteryLevel;
    bool isOn;

    void powerOn()
    {
        isOn = true;
        cout << "The system has been started" << endl;
    }

    void powerOff()
    {
        isOn = false;
        cout << "The system has beed shutdown" << endl;
    }

    void openApps(int numApps)
    {
        int batteryDrain = 0.5 * numApps;
        if (batteryLevel >= batteryDrain)
        {
            batteryLevel -= batteryDrain;
            cout << numApps << " apps opened. Battery level: " << batteryLevel << "%" << endl;
            return;
        }
        cout << "Insufficient battery to open " << numApps << " apps. Battery level remains unchanged." << endl;
    }

    void closeApps(int numApps)
    {
        int batteryCharge = 0.3 * numApps;
        batteryLevel += batteryCharge;

        if (batteryLevel > 100)
            batteryLevel = 100;

        cout << numApps << " apps closed. Battery level: " << batteryLevel << "%" << endl;
    }

    void charge(int amount)
    {
        batteryLevel += amount;
        if (batteryLevel > 100)
            batteryLevel = 100;

        cout << "Laptop has charges. Batery level: " << batteryLevel << "%" << endl;
    }

    void printSpecs()
    {
        cout << "\nLaptop Details:\n\n";
        cout << "Brand: " << brand << endl;
        cout << "Screen Size: " << screenSize << " inches" << endl;
        cout << "Processor: " << processor << endl;
        cout << "RAM: " << ram << " GB" << endl;
        cout << "Storage: " << storage << " GB" << endl;
        cout << "Battery Level: " << batteryLevel << "%" << endl;
    }
};

int main()
{
    Laptop l1 = {"Hp elitebook g4", 15.6, "Intel Core i7", 16, 512, 0, false};
    // let's setup our laptop
    l1.charge(20);
    l1.powerOn();
    l1.openApps(14);
    l1.closeApps(6);
    l1.printSpecs();
    l1.powerOff();

    return 0;
}