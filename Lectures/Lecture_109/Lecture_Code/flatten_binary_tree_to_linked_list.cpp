// User function Template for C++

class Solution
{
public:
    void flatten(Node *root)
    {

        Node *temp = root;
        while (temp)
        {
            // agar left exist hi nhi krta
            if (temp->left == NULL)
                temp = temp->right;
            else // agar left exist krta hai
            {
                // create link
                Node *curr = temp->left;
                while (curr->right != NULL)
                    curr = curr->right;

                curr->right = temp->right; // right most main root ka right point karega
                temp->right = temp->left;  // right point karega left ko
                temp->left = NULL;         // left wala pointer hatadainga

                temp = temp->right; // ab left wala part par jayinga (it's updated on right though)
            }
        }
    }
};