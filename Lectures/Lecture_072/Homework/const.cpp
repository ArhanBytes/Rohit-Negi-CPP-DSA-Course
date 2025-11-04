#include <iostream>
#include <string>
using namespace std;

class Customer
{
private:
    int id;
    const string name; // 'name' cannot be modified
    double balance;

public:
    inline Customer(int customerId, const string &customerName)
        : id(customerId), name(customerName), balance(0.0) {}

    // Getter methods
    int getId() const { return id; }
    const string &getName() const { return name; }
    double getBalance() const { return balance; }

    // Setter method for balance
    void setBalance(double newBalance) { balance = newBalance; }

    // Display customer information
    void displayInfo() const
    {
        cout << "Customer ID: " << id << "\n";
        cout << "Name: " << name << "\n";
        cout << "Balance: $" << balance << "\n";
    }
};

int main()
{
    Customer myCustomer(123, "John Doe");

    myCustomer.displayInfo();
    myCustomer.setBalance(100.0);
    cout << "Updated balance: $" << myCustomer.getBalance() << "\n";

    return 0;
}
