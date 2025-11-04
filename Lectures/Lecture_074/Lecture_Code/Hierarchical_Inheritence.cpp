#include <iostream>
using namespace std;

class Human
{
protected:
    string name;
    int age;

public:
    Human(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    void work()
    {
        cout << " I am working \n";
    }
};

class Student : public Human
{
    int roll_number, fees;

public:
    Student(string name, int age, int roll_number, int fees) : Human(name, age)
    {
        this->roll_number = roll_number;
        this->fees = fees;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll_number: " << roll_number << endl;
        cout << "Fees: " << fees << endl;
    }
};

class Teacher : public Human
{
    int salary;

public:
    // Teacher(int salary, string name, int age)
    Teacher(string name, int age, int salary) : Human(name, age)
    {
        this->salary = salary;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Student A1("Arhan", 19, 213, 99);
    A1.display();

    Teacher A2("Arfan", 12, 900);
    return 0;
}