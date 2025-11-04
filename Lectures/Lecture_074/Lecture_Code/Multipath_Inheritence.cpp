#include <iostream>
using namespace std;

class Human
{
public:
    string name;
    void display()
    {
        cout << "My name is: " << name << endl;
    }
};

class Engineer : public virtual Human
{

public:
    string specialization;

    void work()
    {
        cout << "I have specialization in " << specialization << endl;
    }
};

class Youtuber : public virtual Human
{
public:
    int subscriber;

    void contentCreator()
    {
        cout << "I have  a subsscriber base of " << subscriber << endl;
    }
};

class CodeTeacher : public Engineer, public Youtuber
{
public:
    int salary;
    CodeTeacher(){};
    CodeTeacher(string name, string specialization, int subscriber, int salary)
    {
        this->name = name;
        this->specialization = specialization;
        this->subscriber = subscriber;
        this->salary = salary;
    }
};

int main()
{

    CodeTeacher A1("Arhan", "CSE", 49000, 99);
    A1.display();

    return 0;
}