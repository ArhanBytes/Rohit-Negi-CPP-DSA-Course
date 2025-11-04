#include <iostream>
using namespace std;

class Student
{
public:
    void print()
    {
        cout << "I am Student\n";
    }
};

class Male
{
public:
    void MalePrint()
    {
        cout << "I am Male\n";
    }
};

class Female
{
public:
    void FemalePrint()
    {
        cout << "I am Female\n";
    }
};
class Boy : public Student, public Male
{
public:
    void boyPrint()
    {
        cout << "i am Boy\n";
    }
};

class Girl : public Student, public Female
{
public:
    void girlPrint()
    {
        cout << "i am Girl\n";
    }
};

int main()
{
    Girl G1;
    G1.print();

    Boy B1;
    B1.MalePrint();
    
    return 0;
}