#include <iostream>
using namespace std;

class Human
{
private:
    string religion, color;

public:
    string name;
    int age, weight;
};

class Student : private Human
{
private:
    int roll_number, fees;

public:
    Student(string name, int age, int weight, int roll_number, int fees)
    {
        this->name = name;
        this->age = age;
        this->weight = weight;
        this->roll_number = roll_number;
        this->fees = fees;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Weight: " << weight << endl;
        cout << "Roll Number: " << roll_number << endl;
        cout << "Fees: " << fees << endl;
    }
};

class Teacher : public Human
{
    int salary, id;
};
int main()
{
    Student A("Arhan", 19, 54, 213, 60000);
    A.display();
    Teacher B;
    B.name = "Arhan";

    return 0;
}