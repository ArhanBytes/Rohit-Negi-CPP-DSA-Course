#include <iostream>
#include <string>
using namespace std;

class Customer
{
public:
    string name;
    int accountNumber;
    int accountBalance;
    bool isActive;

    void deposit(int amount)
    {
        accountBalance += amount;
        cout << "Amount after deposit: " << accountBalance << endl;
    }

    void withdraw(int amount)
    {
        if (accountBalance - amount >= 0)
        {
            accountBalance -= amount;
            cout << "Amount after withdraw: " << accountBalance << endl;
            return;
        }
        cout << "No Sufficient balance " << endl;
    }

    void transfer(int amount, Customer &targetAccount)
    {
        if (accountBalance - amount >= 0)
        {
            accountBalance -= amount;
            targetAccount.accountBalance += amount;
            cout << "Transected Successfully: $" << amount << endl;
            return;
        }
        cout << "No Sufficient balance " << endl;
    }

    void printDetails()
    {
        cout << "\nCustomer Details: " << endl;
        cout << "\nName: " << name << "\nAccount Number: " << accountNumber << "\nAccount Balance: $" << accountBalance << endl
             << endl;
    }
};

int main()
{
    Customer c1;
    // Putting values
    c1.name = "Muhammad Arhan";
    c1.accountNumber = 123;
    c1.accountBalance = 99000;
    c1.isActive = true;
    cout << "Customer 1 details: ";
    c1.printDetails();

    // using methods
    c1.deposit(2000);
    c1.withdraw(1000);

    Customer c2 = {"Faizan raza", 01, 6000, true};
    cout << "Customer 2 details: ";
    c1.printDetails();

    // transfer money
    c1.transfer(4000, c2);
    cout << "Current AccountBalance: " << c2.accountBalance << endl;
    return 0;
}