#include <iostream>
using namespace std;

class Customer
{
private:
    string name;
    int account_number, balance;
    static int total_customer;
    static int total_balance;

public:
    Customer(string name, int account_number, int balance)
    {
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
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
    }

    void withdraw(int amount)
    {
        if (amount > 0 && balance >= amount)
        {
            balance -= amount;
            total_balance -= amount;
        }
    }

    void display()
    {
        cout << name << " " << account_number << " " << balance << " " << total_customer << endl;
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
    Customer A1("Arhan", 1, 1000);
    Customer A2("Arman", 2, 1800);
    Customer A3("Ayan", 3, 2000);
    Customer::access_static();
    A1.deposit(800);
    Customer::access_static();
    A2.withdraw(500);
    Customer::access_static();
}