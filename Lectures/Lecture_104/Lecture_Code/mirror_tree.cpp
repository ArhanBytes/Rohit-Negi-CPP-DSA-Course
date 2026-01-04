/*
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};
*/

class Solution
{
public:
    void mirror(Node *root)
    {
        if (root == NULL)
            return;

        // working for current node
        Node *temp = root->left;
        root->left = root->right;
        root->right = temp;

        // working for left node
        mirror(root->left);

        // working for right node
        mirror(root->right);
    }
};