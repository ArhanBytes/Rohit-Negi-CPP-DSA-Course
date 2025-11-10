/*
class Node {
  public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution
{
public:
    // merge two linked list algorithm
    Node *merge(Node *head1, Node *head2)
    {
        Node *head = new Node(0);
        Node *tail = head;

        while (head1 && head2)
        {
            if (head1->data < head2->data)
            {
                tail->next = head1;
                head1 = head1->next;
                tail = tail->next;
                tail->next = NULL;
            }
            else
            {
                tail->next = head2;
                head2 = head2->next;
                tail = tail->next;
                tail->next = NULL;
            }
        }

        if (head1)
            tail->next = head1;
        else
            tail->next = head2;

        Node *temp = head;
        head = head->next;
        delete temp;

        return head;
    }

    Node *mergeKLists(vector<Node *> &arr)
    {

        for (int i = 1; i < arr.size(); i++)
        {
            arr[0] = merge(arr[0], arr[i]);
        }

        return arr[0];
    }
};