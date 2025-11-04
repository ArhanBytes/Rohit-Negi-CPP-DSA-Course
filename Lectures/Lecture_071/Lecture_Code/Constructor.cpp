#include <iostream>
using namespace std;

class Customer
{
    string name;
    int *roi;
    int account_number;
    int balance;

public:
    // Default Constructor
    Customer()
    {
        name = "Arhan";
        account_number = 5;
        balance = 100;
        roi = new int[100];
    }

    // Parameterized Constructor
    /*
    Customer(string name, int account_number, int balance)
    {
        (*this).name = name;
        this->account_number = account_number;
        this->balance = balance;
    }
    */

    // Inline Constructor

    inline Customer(string a, int b, int c) : name(a), account_number(b), balance(c) {}

    Customer(string a, int b)
    {
        name = a;
        account_number = b;
        balance = 100;
    }

    // Copy constructor
    Customer(Customer &B)
    {
        name = B.name;
        account_number = B.account_number;
        balance = B.balance;
    }

    void display()
    {
        cout << name << " " << account_number << " " << balance << endl;
    }
};

int main()
{
    Customer A1;
    Customer A2("Farhan", 65, 5000);
    Customer A3("Arman", 35);
    Customer A4(A3);
    Customer A5;
    A5 = A1;
    A1.display();
    A2.display();
    A3.display();
    A4.display();
    A5.display();

    return 0;
}