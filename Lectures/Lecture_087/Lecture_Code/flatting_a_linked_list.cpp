/*
class Node {
public:
    int data;
    Node* next;
    Node* bottom;

    Node(int x) {
        data = x;
        next = NULL;
        bottom = NULL;
    }
};
*/

class Solution
{
public:
    Node *merge(Node *head1, Node *head2)
    {
        Node *head = new Node(0);
        Node *tail = head;

        while (head1 != NULL && head2 != NULL)
        {
            if (head1->data < head2->data)
            {
                tail->bottom = head1;
                head1 = head1->bottom;
                tail = tail->bottom;
                tail->bottom = NULL;
            }
            else
            {
                tail->bottom = head2;
                head2 = head2->bottom;
                tail = tail->bottom;
                tail->bottom = NULL;
            }
        }

        if (head1 != NULL)
            tail->bottom = head1;
        else
            tail->bottom = head2;

        Node *temp = head;
        head = head->bottom;
        delete temp;

        return head;
    }

    Node *flatten(Node *root)
    {

        Node *head1, *head2, *head3;

        while (root->next != NULL)
        {
            head1 = root;
            head2 = root->next;
            head3 = root->next->next;

            // merge two linked list
            root = merge(head1, head2);

            head1->next = NULL;
            head2->next = NULL;
            root->next = head3;
        }

        return root;
    }
};