#include <iostream>
using namespace std;

void print_table(int N, int num)
{
    // base caase
    if (num == 0)
        return;

    print_table(N, num - 1);
    cout << N << " * " << num << " = " << N * num << endl;
}

int main()
{

    int N;
    cout << "Enter a table number: ";
    cin >> N;

    int till;
    cout << "how many times till you want: ";
    cin >> till;
    print_table(N, till);
    return 0;
}