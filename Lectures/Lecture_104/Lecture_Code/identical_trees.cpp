/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = nullptr;
        right = nullptr;
    }
};
*/
class Solution
{
public:
    bool isIdentical(Node *r1, Node *r2)
    {
        if (r1 == NULL && r2 == NULL)
            return 1;
        else if (r1 == NULL && r2 != NULL)
            return 0;
        else if (r1 != NULL && r2 == NULL)
            return 0;
        else if (r1->data != r2->data)
            return 0;

        return isIdentical(r1->left, r2->left) && isIdentical(r1->right, r2->right);
    }
};