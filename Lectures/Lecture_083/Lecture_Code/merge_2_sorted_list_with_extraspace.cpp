/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution
{
public:
    Node *sortedMerge(Node *head1, Node *head2)
    {
        // code here
        Node *p1 = head1;
        Node *p2 = head2;

        Node *p = NULL;
        // take the first smallest value
        if (p1->data < p2->data)
        {
            p = new Node(p1->data);
            p1 = p1->next;
        }
        else
        {
            p = new Node(p2->data);
            p2 = p2->next;
        }

        // put either p1 or p2 values depending on which is smaller
        Node *temp = p;
        while (p1 != NULL && p2 != NULL)
        {
            if (p1->data < p2->data)
            {
                temp->next = new Node(p1->data);
                p1 = p1->next;
            }
            else
            {
                temp->next = new Node(p2->data);
                p2 = p2->next;
            }

            temp = temp->next;
        }

        // if there are values in 1st list only
        while (p1)
        {
            temp->next = new Node(p1->data);
            p1 = p1->next;
            temp = temp->next;
        }
        // if there are values in 2nd list only
        while (p2)
        {
            temp->next = new Node(p2->data);
            p2 = p2->next;
            temp = temp->next;
        }

        return p;
    }
};