#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    string grade;
    int age, roll_number;
};

int main()
{
    Student *S = new Student;
    (*S).name = "Arhan";
    (*S).age = 34;
    (*S).roll_number = 43;
    (*S).grade = "A+";

    cout << S->name << " ";
    cout << S->age << " ";
    cout << S->roll_number << " ";
    cout << S->grade << " ";

    return 0;
}