#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // CREATING A QUEUE
    queue<int> q;

    // PUSHING INTO QUEUE
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);

    // FRONT BACK SIZE
    cout << "At start: " << q.front() << endl;
    cout << "At last: " << q.back() << endl;
    cout << "Size of queue: " << q.size() << endl;

    // POP FROM QUEUE
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    cout << "Size of queue: " << q.size() << endl;
    return 0;
}