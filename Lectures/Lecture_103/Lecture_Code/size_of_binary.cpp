/*

Definition for Binary Tree Node
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution
{
public:
    int getSize(Node *node)
    {
        if (node == NULL)
            return 0;

        return getSize(node->left) + 1 + getSize(node->right);
    }
};