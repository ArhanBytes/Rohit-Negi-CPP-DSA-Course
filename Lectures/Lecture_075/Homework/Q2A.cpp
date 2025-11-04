#include <iostream>
using namespace std;

class Vector {
private:
    double x, y;

public:
    Vector(double xVal, double yVal) : x(xVal), y(yVal) {}

    // Overload the * operator for scalar multiplication
    Vector operator*(double scalar) const {
        return Vector(x * scalar, y * scalar);
    }

    void display() const {
        cout << "Vector (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Vector v1(2.0, 3.0);
    double scalar = 2.5;

    Vector result = v1 * scalar; //v1.mul(scalar)

    cout << "Original vector:" << endl;
    v1.display();

    cout << "After scalar multiplication:" << endl;
    result.display();

    return 0;
}
