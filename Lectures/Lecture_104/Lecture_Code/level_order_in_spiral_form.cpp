/*
class Node
{
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */
class Solution
{
public:
    vector<int> findSpiral(Node *root)
    {
        // TAKING 2 STACK LEFT TO RIGHT || RIGHT TO LEFT
        stack<Node *> l_to_r;
        stack<Node *> r_to_l;
        r_to_l.push(root);

        vector<int> ans;
        Node *temp;

        while (!l_to_r.empty() || !r_to_l.empty())
        {
            // FOR LEFT TO RIGHT
            if (!l_to_r.empty())
            {
                while (!l_to_r.empty())
                {
                    // take the element out
                    temp = l_to_r.top();
                    l_to_r.pop();
                    ans.push_back(temp->data);

                    // put its left
                    if (temp->left)
                        r_to_l.push(temp->left);

                    // put its right
                    if (temp->right)
                        r_to_l.push(temp->right);
                }
            }
            // FOR RIGHT TO LEFT
            else
            {
                while (!r_to_l.empty())
                {
                    // take the element out
                    temp = r_to_l.top();
                    r_to_l.pop();
                    ans.push_back(temp->data);

                    // put its right
                    if (temp->right)
                        l_to_r.push(temp->right);

                    // put its left
                    if (temp->left)
                        l_to_r.push(temp->left);
                }
            }
        }

        return ans;
    }
};