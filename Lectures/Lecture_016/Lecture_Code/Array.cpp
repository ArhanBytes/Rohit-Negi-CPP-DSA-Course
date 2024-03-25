#include <iostream>
using namespace std;

int main()
{
    // WAYS OF PRINTING ARRAY;

    // 1: Way 1
    int arr[5] = {1, 2, 3, 4, 5};

    // 2: Way 2
    //  int arr[] = {1,2,3,4,5};

    // 3: Way: 3
    // int arr[5] = {2,3}

    // 4: Way: 4
    // int arr[5];
    // for(int i = 0; i<5; i++){
    //  cin>>arr[i];
    // }

    // 5: Way: 5
    // int arr[5] = {0}

    // printing array
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}