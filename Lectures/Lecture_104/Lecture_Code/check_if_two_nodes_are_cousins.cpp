/*Complete the function below
Node is as follows:
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution
{
public:
    bool isCousins(Node *root, int a, int b)
    {
        // base case
        if (root == nullptr)
            return false;

        // return false if a and b are equal
        if (a == b)
            return false;

        queue<Node *> q;

        // Push the root node into queue
        q.push(root);

        // variables to check if a and b are found yet.
        bool aFound = false, bFound = false;

        while (!q.empty())
        {
            int s = q.size();

            // To simulate level order traversal,
            // only traverse the first s nodes in
            // the queue.
            while (s--)
            {
                Node *curr = q.front();
                q.pop();

                if (curr->data == a)
                    aFound = true;
                if (curr->data == b)
                {
                    bFound = true;
                }

                // if a and b are children to the same node,
                // then return false.
                if (curr->left != nullptr && curr->right != nullptr &&
                    ((curr->left->data == a && curr->right->data == b) ||
                     (curr->left->data == b && curr->right->data == a)))
                    return false;

                // push left node into queue
                if (curr->left != nullptr)
                    q.push(curr->left);

                // Push right node into queue.
                if (curr->right != nullptr)
                    q.push(curr->right);
            }

            // After iteration of one level, following needs to
            // be checked

            // if both a and b are found,
            // return true.
            if (aFound && bFound)
                return true;

            // if one of a or b is found,
            // return false.
            if (aFound || bFound)
                return false;
        }

        return false;
    }
};
