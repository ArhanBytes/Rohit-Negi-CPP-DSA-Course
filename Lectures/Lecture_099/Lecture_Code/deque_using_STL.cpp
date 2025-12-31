#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> dq;

    // PUSH OPERATIONS
    dq.push_front(5);
    dq.push_front(15);
    dq.push_front(3);
    dq.push_front(4);
    dq.push_back(2);
    dq.push_back(9);
    dq.push_back(19);
    dq.push_back(119);
    dq.push_back(91);
    dq.push_back(911);
    dq.push_back(23);

    // PRINTING DEQUEUE

    // POP OPERATIONS
    dq.pop_back();
    dq.pop_front();

    cout << "Start element: " << dq.front() << endl;
    cout << "Back Element: " << dq.back() << endl;
    cout << "is Empty: " << dq.empty() << endl;
    return 0;
}