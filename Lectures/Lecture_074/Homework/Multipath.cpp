#include <iostream>
#include <string>
using namespace std;

class person
{
public:
    string name;
    int code;
    void input()
    {
        cout << "\nEnter the name of the person: ";
        cin >> name;
        cout << "Enter the code of the person: ";
        cin >> code;
    }
    void display()
    {
        cout << "Name of the person: " << name << endl;
        cout << "Code of the person: " << code << endl;
    }
};

class account : virtual public person
{
public:
    float pay;
    void getpay()
    {
        cout << "Enter the pay: ";
        cin >> pay;
    }
    void display()
    {
        person::display();
        cout << "Pay: $" << pay << endl;
    }
};

class admin : virtual public person
{
public:
    int experience;
    void getexp()
    {
        cout << "Enter the experience: ";
        cin >> experience;
    }
    void display()
    {
        cout << "Experience: " << experience << " years" << endl;
    }
};

class master : public account, public admin
{
public:
    string company;
    void gettotal()
    {
        cout << "Enter the company name: ";
        cin >> company;
    }
    void display()
    {
        account::display(); // Call account class display method
        admin::display();   // Call admin class display method
        cout << "Company name: " << company << endl;
    }
};

int main()
{
    master m1;
    m1.input();
    m1.getpay();
    m1.getexp();
    m1.gettotal();

    cout << "\nShowing the details: \n\n";
    m1.display();

    return 0;
}
