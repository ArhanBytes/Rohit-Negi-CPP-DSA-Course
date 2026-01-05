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
    vector<int> inOrder(Node *root)
    {
        vector<int> ans;
        // 2 stack one for original number LNR
        // one tells the repeatation 0 means 1 times 1 means second times
        stack<Node *> st;
        stack<bool> visited;
        Node *temp;
        bool appears;

        st.push(root);
        visited.push(0);

        while (!st.empty())
        {
            temp = st.top();
            appears = visited.top();
            st.pop();
            visited.pop();

            if (appears)
                ans.push_back(temp->data);
            else
            {
                // push right
                if (temp->right)
                {
                    st.push(temp->right);
                    visited.push(0);
                }
                // push itself with appears + 1
                st.push(temp);
                visited.push(1);
                // push right
                if (temp->left)
                {
                    st.push(temp->left);
                    visited.push(0);
                }
            }
        }

        return ans;
    }
};