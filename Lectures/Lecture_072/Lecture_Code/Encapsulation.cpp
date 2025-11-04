#include <iostream>
using namespace std;

class Customer
{
    string name;
    int account_number, balance, age;
    static int total_customer;
    static int total_balance;

public:
    Customer(string name, int account_number, int balance, int age)
    {
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
        this->age = age;
        total_customer++;
        total_balance += balance;
    }

    static void access_static()
    {
        cout << "Total Number of Customer: " << total_customer << endl;
        cout << "Total Balance in Bank: " << total_balance << endl;
    }

    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
            total_balance += amount;
        }
        else
            cout << "Invalid amount" << endl;
    }

    void withdraw(int amount)
    {
        if (amount > 0 && balance >= amount)
        {
            balance -= amount;
            total_balance -= amount;
        }
    }

    void updateAge(int age)
    {
        if (age > 0 && age < 100)
            this->age = age;
        else
            cout << "Invalid age" << endl;
    }
    void display()
    {
        cout << name << " " << account_number << " " << balance << " " << age << endl;
    }

    void display_total()
    {
        cout << total_customer << endl;
    }
};

int Customer::total_customer = 0;
int Customer::total_balance = 0;

int main()
{
    Customer A1("Arhan", 1, 1000, 3);
    Customer A2("Arman", 2, 1800, 4);
    Customer A3("Ayan", 3, 2000, 8);
    A1.updateAge(24);
    A1.deposit(200);
    A1.display();

    return 0;
} 