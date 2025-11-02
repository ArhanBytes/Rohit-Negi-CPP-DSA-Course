#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int age, roll_number;
    string grade;

public:
    // Setter
    void setName(string n)
    {
        if (n.size() == 0)
        {
            cout << "Invalid Name";
            return;
        }
        name = n;
    }
    void setAge(int a)
    {
        if (a < 0 || a > 100)
        {
            cout << "Invalid Age" << endl;
            return;
        }
        age = a;
    }
    void setRoll_number(int r)
    {
        roll_number = r;
    }
    void setGrade(string g)
    {
        grade = g;
    }

    // Getter
    void getName()
    {
        cout << name << endl;
    }
    void getAge()
    {
        cout << age << endl;
    }
    int getRoll_number()
    {
        return roll_number;
    }
    string getGrade(int pin)
    {
        if (pin == 123)
            return grade;

        return " ";
    }
};

int main()
{
    Student s1;
    s1.setName("");
    s1.setAge(10);
    s1.setRoll_number(21);
    s1.setGrade("A+");
    s1.getName();
    s1.getAge();
    cout << s1.getRoll_number() << endl;
    cout << s1.getGrade(123) << endl;

    return 0;
}