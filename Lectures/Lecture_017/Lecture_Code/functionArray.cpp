#include <iostream>
using namespace std;

void fun(int a[], int n)
{
    cout << sizeof(a) << endl;
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}
int main()
{
    int arr[5] = {3, 2, 1, 7, 5};
    cout << sizeof(arr) << endl;
    fun(arr, 5);

    return 0;
}