/*
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution
{
public:
    Node *rev(Node *curr, Node *prev)
    {
        // base case
        if (curr == NULL)
            return prev;

        // recursive appraoch
        Node *future = curr->next;
        curr->next = prev;

        return rev(future, curr);
    }

    Node *addTwoLists(Node *head1, Node *head2)
    {
        // 1: REVERSE BOTH LIST
        head1 = rev(head1, NULL);
        head2 = rev(head2, NULL);

        // now add them
        Node *L1 = head1, *L2 = head2;
        Node *L3 = NULL; // this is LL where the values goes
        int sum, value, carry = 0;
        while (L1 != NULL && L2 != NULL)
        {
            // add the values
            sum = carry + L1->data + L2->data;
            carry = sum / 10;
            value = sum % 10;

            // insert at head
            Node *temp = new Node(value);
            temp->next = L3;
            L3 = temp;

            // move forward
            L1 = L1->next;
            L2 = L2->next;
        }

        // if there are values only in list 1
        while (L1 != NULL)
        {
            sum = carry + L1->data;
            carry = sum / 10;
            value = sum % 10;

            // insert at head
            Node *temp = new Node(value);
            temp->next = L3;
            L3 = temp;

            // move forward
            L1 = L1->next;
        }

        // if there are values only in list 2
        while (L2 != NULL)
        {
            sum = carry + L2->data;
            carry = sum / 10;
            value = sum % 10;

            // insert at head
            Node *temp = new Node(value);
            temp->next = L3;
            L3 = temp;

            // move forward
            L2 = L2->next;
        }

        // if there is carry exist
        if (carry)
        {
            Node *temp = new Node(carry);
            temp->next = L3;
            L3 = temp;
        }

        // since it is mention there can be zero in the list but we should not give zero on the output if it apppears in front
        while (L3->data == 0)
        {
            Node *to_be_del = L3;
            L3 = L3->next;
            delete to_be_del;
        }

        return L3;
    }
};