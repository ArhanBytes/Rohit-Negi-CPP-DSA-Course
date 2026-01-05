// Back-end complete function Template for C++

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

class Solution
{
public:
    bool isIdentical(Node *r1, Node *r2)
    {
        if (!r1 && !r2)
            return 1;

        if (!r1 && r2)
            return 0;
        else if (r1 && !r2)
            return 0;
        else if (r1->data != r2->data)
            return 0;

        return isIdentical(r1->left, r2->left) && isIdentical(r1->right, r2->right);
    }

    int find_pos(int *inorder, int s, int e, int k, bool &valid)
    {
        for (int i = s; i <= e; i++)
        {
            if (inorder[i] == k)
                return i;
        }

        valid = false;
        return -1;
    }

    Node *TREE1(int *inorder, int *preorder, int inStart, int inEnd, int index, bool &valid)
    {
        // agar valid hi nhi to aga nhi banayinga
        if (!valid)
            return NULL;

        // base case
        if (inStart > inEnd)
            return NULL;

        Node *root = new Node(preorder[index]);
        int position = find_pos(inorder, inStart, inEnd, preorder[index], valid);

        root->left = TREE1(inorder, preorder, inStart, position - 1, index + 1, valid);
        root->right = TREE1(inorder, preorder, position + 1, inEnd, index + (position - inStart) + 1, valid);

        return root;
    }

    Node *TREE2(int *inorder, int *postorder, int inStart, int inEnd, int index, bool &valid)
    {
        if (!valid)
            return NULL;

        if (inStart > inEnd)
            return NULL;

        Node *root = new Node(postorder[index]);
        int position = find_pos(inorder, inStart, inEnd, postorder[index], valid);

        root->right = TREE2(inorder, postorder, position + 1, inEnd, index - 1, valid);
        root->left = TREE2(inorder, postorder, inStart, position - 1, index - (inEnd - position) - 1, valid);

        return root;
    }

    bool checktree(int preorder[], int inorder[], int postorder[], int N)
    {
        bool valid = true;
        // making tree from preorder and inorder
        Node *root1 = TREE1(inorder, preorder, 0, N - 1, 0, valid);
        // making tree form postorder and inorder
        Node *root2 = NULL;
        if (valid)
            root2 = TREE2(inorder, postorder, 0, N - 1, N - 1, valid);

        // check if the tree even able to make it or not, as we know if inorder-preorder is for different tree the treee will never make OR same for inorder-postorder
        if (!valid)
            return 0;
        // check if the both tree are same or not
        return isIdentical(root1, root2);
    }
};
