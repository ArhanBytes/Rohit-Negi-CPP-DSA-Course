#include <iostream>
using namespace std;

class Engineer
{
    void money()
    {
        cout << "Hello Money" << endl;
    }

public:
    string specialization;

    Engineer()
    {
        cout << "Hello engineer\n";
    }

    void work()
    {
        cout << "I have specialization in " << specialization << endl;
    }
};

class Youtuber
{
public:
    int subscriber;

    Youtuber()
    {
        cout << "Hello Youtuber\n";
    }
    void contentCreator()
    {
        cout << "I have  a subsscriber base of " << subscriber << endl;
    }
};

class CodeTeacher : public Engineer, public Youtuber
{
public:
    string name;
    CodeTeacher()
    {
        cout << "Hello CodeTeacher\n";
    }
    CodeTeacher(string name, string specialization, int subscriber)
    {
        this->name = name;
        this->specialization = specialization;
        this->subscriber = subscriber;
    }

    void showCase()
    {
        cout << "My name is " << name << endl;
        work();
        contentCreator();
    }
};

int main()
{
    // CodeTeacher A1("Arhan", "CS", 81);
    // A1.showCase();

    CodeTeacher A1;

    return 0;
}