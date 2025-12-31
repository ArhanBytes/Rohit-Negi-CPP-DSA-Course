#include<iostream>
#include<queue>
using namespace std;

void printQueue(queue<int>&q)
{
    int s = q.size();
    cout << "[ ";
    while(s--)
    {
        cout << q.front() << " ";
        q.push(q.front());
        q.pop();
    }
    cout << "] ";
}

int main()
{
    int arr[] = {3,6,2,7,8,11};
    int n = sizeof(arr)/sizeof(arr[0]);

    int k = 4;

    // my code here
    queue<int> q;

    // push k -1 elements to queue
    for(int i = 0; i < k-1; i++)
        q.push(arr[i]);

    for(int i = k-1; i < n; i++)
    {
        // 1: push ith element to queue;
        q.push(arr[i]);
        // 2: print queue;
        printQueue(q);
        // 3: pop from queue
        q.pop();
    }
}