/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = nullptr;
    }
};
*/

class Solution
{
public:
    int find_pos(vector<int> &inorder, int s, int e, int k)
    {
        for (int i = s; i <= e; i++)
        {
            if (inorder[i] == k)
                return i;
        }

        return -1;
    }
    Node *TREE(vector<int> &inorder, vector<int> &postorder, int inStart, int inEnd, int index)
    {
        // base case
        if (inStart > inEnd)
            return NULL;

        // create the node
        Node *root = new Node(postorder[index]);
        // ab node ki index find kro inorder ma
        int position = find_pos(inorder, inStart, inEnd, postorder[index]);

        // right part ka liya kaam kro
        root->right = TREE(inorder, postorder, position + 1, inEnd, index - 1); // index -1 kiunka right ka liya postorder ka next element aik pahla hi hoga
        // left part ka liya kaam kro
        root->left = TREE(inorder, postorder, inStart, position - 1, index - (inEnd - position) - 1);
        // inEnd - postion batayega kitna element right per ayetha usma sa index and 1 minus kronga to ma woh element per pohanch jaonga jisko mujha ab create krna hai

        return root;
    }
    Node *buildTree(vector<int> &inorder, vector<int> &postorder)
    {
        return TREE(inorder, postorder, 0, postorder.size() - 1, postorder.size() - 1);
    }
};