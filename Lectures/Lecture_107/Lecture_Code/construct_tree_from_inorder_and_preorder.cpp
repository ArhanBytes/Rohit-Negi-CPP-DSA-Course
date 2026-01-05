/*
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution
{
public:
    int find_pos(vector<int> &inorder, int start, int end, int target)
    {
        for (int i = start; i <= end; i++)
        {
            if (inorder[i] == target)
                return i;
        }

        return -1;
    }
    Node *TREE(vector<int> &inorder, vector<int> &preorder, int inStart, int inEnd, int index)
    {
        // base case
        if (inStart > inEnd)
            return NULL;

        // creating a node from preorder
        Node *root = new Node(preorder[index]);
        // position find kro is preorder[index] ki inorder vector ma
        int position = find_pos(inorder, inStart, inEnd, preorder[index]);

        // element ka left part ka liya kaam kro
        root->left = TREE(inorder, preorder, inStart, position - 1, index + 1);
        // element ka right part ka liya kaam kro
        root->right = TREE(inorder, preorder, position + 1, inEnd, index + (position - inStart) + 1);

        return root;
    }
    Node *buildTree(vector<int> &inorder, vector<int> &preorder)
    {
        return TREE(inorder, preorder, 0, preorder.size() - 1, 0);
    }
};