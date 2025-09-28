#include <iostream>
using namespace std;

void print_10_to_n(int num)
{
    if (num == 10)
    {
        cout << num << " ";
        return;
    }

    print_10_to_n(num - 1);
    cout << num << " ";
}

void print_10_to_n(int num, int N)
{
    if (num > N)
        return;
    cout << num << " ";
    print_10_to_n(num + 1, N);
}

int main()
{
    int N = 34;
    if (N > 10)
    {
        print_10_to_n(10, N); // two argument

        cout << endl;

        print_10_to_n(N); // one argument
    }

    return 0;
}