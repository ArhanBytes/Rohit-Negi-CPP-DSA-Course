#include <iostream>
#include <string>
using namespace std;

class TimeOfDay
{
public:
    virtual void getTemperature() = 0;
    virtual ~TimeOfDay() {} // Crucial for proper cleanup
};

class Daytime : public TimeOfDay
{
private:
    double temperature;
    string weather;

public:
    void getTemperature() override
    {
        cout << "Enter the Temperature: ";
        cin >> temperature;

        if (temperature <= 20)
            weather = "Partly cloudy";
        else if (temperature <= 30)
            weather = "Dry";
        else if (temperature <= 40)
            weather = "Slightly warm";
        else
            weather = "Sunny";

        cout << "Predicted Weather: " << weather << endl;
    }

    ~Daytime() { cout << "Daytime object destroyed\n"; }
};

class Nighttime : public TimeOfDay
{
private:
    double temperature;
    string weather;

public:
    void getTemperature() override
    {
        cout << "Enter the Temperature: ";
        cin >> temperature;

        if (temperature <= 5)
            weather = "Cold";
        else if (temperature <= 20)
            weather = "Windy";
        else
            weather = "Clear skies with stars visible";

        cout << "Predicted Weather: " << weather << endl;
    }

    ~Nighttime() { cout << "Nighttime object destroyed\n"; }
};

int main()
{
    char t;
    TimeOfDay *time = nullptr;

    while (true)
    {
        cout << "Enter the time of day (D for daytime / N for nighttime / 0 to exit): ";
        cin >> t;

        if (t == '0')
            break;

        switch (t)
        {
        case 'D':
            time = new Daytime;
            break;
        case 'N':
            time = new Nighttime;
            break;
        default:
            cout << "Invalid input. Try again.\n";
            continue;
        }

        time->getTemperature();
        delete time;
        time = nullptr;
    }

    return 0;
}
