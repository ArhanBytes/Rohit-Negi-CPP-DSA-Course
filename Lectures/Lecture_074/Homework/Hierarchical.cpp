#include <iostream>
using namespace std;

class shape
{
public:
    string name;
    int sides;
    shape(string n, int s) : name(n), sides(s) {}
};

class triangle : public shape
{
private:
    int base;
    int height;

public:
    inline triangle(string n, int s, int b, int h) : shape(n, s), base(b), height(h) {}

    void area()
    {
        cout << "Area of triangle: " << (0.5 * base * height) << endl;
    }
};

class square : public shape
{
private:
    int height;

public:
    inline square(string n, int s, int h) : shape(n, s), height(h) {}

    void area()
    {
        cout << "Area of square: " << (height * height) << endl;
    }
};

int main()
{
    triangle t("Triangle", 3, 5, 4);
    square s("Square", 4, 6);

    t.area();
    s.area();

    return 0;
}
