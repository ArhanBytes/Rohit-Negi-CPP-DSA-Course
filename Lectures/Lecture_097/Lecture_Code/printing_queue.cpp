#include <iostream>
#include <queue>
using namespace std;

int main()
{

    queue<int> q;
    q.push(5);
    q.push(15);
    q.push(3);
    q.push(11);
    q.push(4);

    int s = q.size();

    cout << "Printing Queue: ";
    while (s--)
    {
        cout << q.front() << " ";
        q.push(q.front());
        q.pop();
    }

    cout << "\nSize of Queue: " << q.size();
}