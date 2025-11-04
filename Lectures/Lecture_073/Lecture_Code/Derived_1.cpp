#include <iostream>
using namespace std;

class Human
{
protected:
    string name;
    int age, weight;
};

class Student : protected Human
{
private:
    int roll_number, fees;

public:
    void fun(string n, int a, int w)
    {
        name = n;
        age = a;
        weight = w;
    }

    void display()
    {
        cout << name << " " << age << " " << weight << endl;
    }
};
int main()
{
    Student A;
    A.fun("Arhan", 10, 43);
    A.display();

    return 0;
}