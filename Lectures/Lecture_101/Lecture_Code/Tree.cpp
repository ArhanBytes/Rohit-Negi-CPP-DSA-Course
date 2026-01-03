#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;
    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

int main()
{

    int x;
    cout << "Enter the root element: ";
    cin >> x;
    int first, second;
    queue<Node *> q;

    Node *root = new Node(x);
    q.push(root);

    // Building the Binary tree
    while (!q.empty())
    {
        // Take the Parent Node
        Node *temp = q.front();
        q.pop();

        cout << "-------------------Parent Element is: " << temp->data<< "-------------------\n";

        // LEFT PART
        cout << "Please Enter the left child: ";
        cin >> first;

        if (first != -1)
        {
            temp->left = new Node(first);
            q.push(temp->left);
        }

        // RIGHT PART
        cout << "Please Enter the right child: ";
        cin >> second;

        if (second != -1)
        {
            temp->right = new Node(second);
            q.push(temp->right);
        }
    }



    return 0;
}