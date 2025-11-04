#include <iostream>
using namespace std;

/*
how exception class works
class exception
{
protected:
    string msg;

public:
    exception(string msg)
    {
        this->msg = msg;
    }

    string what()
    {
        return msg;
    }
};

class runtime_error: public exception
{
public:
    runtime_error(const string &msg): exception(msg);
};
*/

class InvalidAmountError : public runtime_error
{
public:
    InvalidAmountError(const string &msg) : runtime_error(msg){};
};

class InsufficientBalanceError : public runtime_error
{
public:
    InsufficientBalanceError(const string &msg) : runtime_error(msg){};
};

class Customer
{
    string name;
    int balance, account_number;

public:
    Customer(string name, int balance, int account_number)
    {
        this->name = name;
        this->balance = balance;
        this->account_number = account_number;
    }

    void deposit(int amount)
    {
        if (amount <= 0)
            throw InvalidAmountError("amount should be greater than 0\n");

        balance += amount;
        cout << amount << "$ is credited successfully\n";
    }

    void withdraw(int amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << amount << "$ is debited successfully\n";
        }
        else if (amount < 0)
        {
            throw InvalidAmountError("Amount should be greater than 0$\n");
        }
        else
        {
            throw InsufficientBalanceError("Your balance is low\n");
        }
    }
};

int main()
{
    Customer C1("Arhan", 5000, 10);
    try
    {

        C1.deposit(100);
        C1.withdraw(6000);
        C1.deposit(100);
    }
    catch (const InvalidAmountError &e)
    {
        cout << "Exception Occured: " << e.what();
    }
    catch (const InsufficientBalanceError &e)
    {
        cout << "Exception Occured: " << e.what();
    }
    catch (...) // default case
    {
        cout << "Exception Occured" << endl;
    }

    return 0;
}

