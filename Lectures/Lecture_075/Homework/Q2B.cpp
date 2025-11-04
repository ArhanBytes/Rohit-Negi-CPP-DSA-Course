#include <iostream>
using namespace std;

class Vector
{
private:
    double x, y;

public:
    Vector(double xVal, double yVal) : x(xVal), y(yVal) {}

    Vector operator-()
    {
        return Vector(-(x), -(y));
    }

    void display() const
    {
        cout << "Vector (" << x << ", " << y << ")" << endl;
    }
};

int main()
{
    Vector v1(2.0, -3.0);

    Vector negated = -v1;

    cout << "Original vector:" << endl;
    v1.display();

    cout << "Negated Vector:" << endl;
    negated.display();

    return 0;
}
