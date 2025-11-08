/*
structure of the node of the linked list is
struct Node
{
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/
// Function to merge two linked lists
class Solution
{
public:
    vector<Node *> mergeList(struct Node **head1, struct Node **head2)
    {
        // Code Here
        Node *L1 = *head1;
        Node *L2 = *head2;

        while (L1 != NULL && L2 != NULL)
        {
            Node *temp1 = L1->next;
            L1->next = L2;

            Node *temp2 = L2->next;
            L2->next = temp1;

            L1 = temp1;
            L2 = temp2;
        }

        return {*head1, L2};
    }
};