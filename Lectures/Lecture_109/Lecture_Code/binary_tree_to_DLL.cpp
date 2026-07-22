/* Structure for tree and linked list
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node()
        : data(0)
        , left(NULL)
        , right(NULL) {}

    Node(int x)
        : data(x)
        , left(NULL)
        , right(NULL) {}
};
 */

// This function should return head to the DLL
class Solution
{
public:
    Node *bToDLL(Node *root)
    {
        Node *head = NULL;
        Node *prev = NULL;
        Node *curr = root;

        while (curr)
        {
            // left part exist nhi krta
            if (curr->left == NULL)
            {
                if (prev == NULL)
                    head = curr;
                else
                {
                    prev->right = curr;
                    curr->left = prev;
                }
                prev = curr;

                curr = curr->right;
            }
            else // left part exist krta hai
            {
                // left part explore kiya hai yeah nhi
                Node *temp = curr->left;
                while (temp->right != NULL && temp->right != curr)
                    temp = temp->right;

                // haven't explored yet
                if (temp->right == NULL)
                {
                    temp->right = curr; // create the link
                    curr = curr->left; // move to left
                }
                else // already explored
                {
                    temp->right = NULL; // remove the link

                    prev->right = curr;
                    curr->left = prev;

                    prev = curr;
                    curr = curr->right;
                }
            }
        }

        return head;
    }
};