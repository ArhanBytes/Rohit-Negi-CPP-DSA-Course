#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int no_of_elems = sizeof(arr) / sizeof(arr[0]);
    int *ptr = arr + (no_of_elems-1);

    for (int i = 4; i >= 0; i--)
    {
        cout << *ptr << " ";
        ptr--;
    }

    return 0;
}
