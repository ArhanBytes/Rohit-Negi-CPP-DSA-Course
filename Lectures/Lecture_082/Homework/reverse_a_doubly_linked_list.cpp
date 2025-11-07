/*
class Node {
  public:
    int data;
    Node *next;
    Node *prev;
    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

*/
class Solution
{
public:
    Node *reverse(Node *head)
    {
        // code here
        // find it's tail
        Node *tail = head;

        while (tail->next != NULL)
            tail = tail->next;

        // swap the data of head and tail
        Node *head1 = head;
        while (head1 != tail && tail->next != head1)
        {
            int n = head1->data;
            head1->data = tail->data;
            tail->data = n;

            head1 = head1->next;
            tail = tail->prev;
        }

        return head;
    }
};