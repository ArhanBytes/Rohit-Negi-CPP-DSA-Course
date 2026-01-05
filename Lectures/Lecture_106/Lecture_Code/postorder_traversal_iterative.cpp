// User function Template for C++

/* Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};*/
class Solution
{
public:
    vector<int> postOrder(Node *node)
    {
        // POSTORDER IS LEFT RIGHT NODE
        // WE WILL FIND NODE RIGHT LEFT
        // THEN REVERSE IT

        stack<Node *> s;
        vector<int> ans;
        Node *temp;

        s.push(node);
        while (!s.empty())
        {
            temp = s.top();
            s.pop();

            ans.push_back(temp->data);

            // put its left
            if (temp->left)
                s.push(temp->left);
            if (temp->right)
                s.push(temp->right);
        }

        // reverse part
        int start = 0;
        int end = ans.size() - 1;
        while (start < end)
            swap(ans[start++], ans[end--]);

        return ans;
    }
};