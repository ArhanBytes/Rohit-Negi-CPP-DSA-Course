#include <iostream>
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

void PreOrder(Node *root)
{
    if (root == NULL)
        return;

    cout << root->data << " ";
    PreOrder(root->left);
    PreOrder(root->right);
}

void InOrder(Node *root)
{
    if (root == NULL)
        return;

    InOrder(root->left);
    cout << root->data << " ";
    InOrder(root->right);
}

void PostOrder(Node *root)
{
    if (root == NULL)
        return;

    PostOrder(root->left);
    PostOrder(root->right);
    cout << root->data << " ";
}

Node *binary_tree()
{
    int x;
    cin >> x;
    // base case
    if (x == -1)
        return NULL;

    // recursive function
    Node *temp = new Node(x);
    cout << "Left child of " << x << ": ";
    temp->left = binary_tree();

    cout << "Right child of " << x << ": ";
    temp->right = binary_tree();

    return temp;
}

int main()
{

    cout << "Enter the root element: ";
    Node *root = binary_tree();

    cout << "-------------TRAVERSAL-------------";

    cout << "\nPre-order Traversal: ";
    PreOrder(root);

    cout << "\nIn-order Traversal: ";
    InOrder(root);

    cout << "\nPost-order Traversal: ";
    PostOrder(root);

    return 0;
}

/*
Enter the root element: 1
Left child of 1: 2
Left child of 2: 3
Left child of 3: -1
Right child of 3: -1
Right child of 2: 4
Left child of 4: -1
Right child of 4: -1
Right child of 1: 6
Left child of 6: 2
Left child of 2: -1
Right child of 2: -1
Right child of 6: 9
Left child of 9: -1
Right child of 9: 0
Left child of 0: -1
Right child of 0: -1


                1
           /        \
         2            6
       /   \        /   \
      3     4      2     9
                          \
                           0


*/