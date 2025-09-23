#include <iostream>
#include <vector>
using namespace std;

void swapping(int *p1, int *p2) // pass by pointer
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void swapping(int &p1, int &p2) // pass by referene
{
    int temp = p1;
    p1 = p2;
    p2 = temp;
}

void pass(vector<int> &v)
{
    int count = 1;
    for (int i = 0; i < v.size(); i++)
    {
        v[i] = count * count;
        count++;
    }
}

void dob(int *ptr)
{
    for(int i = 0; i < 5; i++)
    {
        *(ptr+i) = ptr[i] *2;
    }
}

int main()
{
    int first = 10, second = 20;
    cout << "Before: " << first << "  " << second << endl;
    swapping(first, second);
    cout << "After: " << first << "  " << second << endl;

    // Reference varaible
    int num = 10;
    int &temp = num; // num and temp are same
    temp++;
    cout << num << endl;

    vector<int> v(5, 0);
    pass(v);

    for (auto i : v)
        cout << i << " ";

    cout << endl;

    // double the values of array
    int arr[5] = {6, 7, 8, 9, 10};
    dob(arr);
    for (int i = 0; i < 5; i++)
        cout << *(arr + i) << " ";
}