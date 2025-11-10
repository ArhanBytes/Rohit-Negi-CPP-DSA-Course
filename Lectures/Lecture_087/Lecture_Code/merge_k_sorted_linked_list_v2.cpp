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

    void mergeSort(vector<Node *> &arr, int s, int e)
    {
        // base case
        if (s >= e)
            return;

        int mid = s + (e - s) / 2;

        mergeSort(arr, s, mid);
        mergeSort(arr, mid + 1, e);

        arr[s] = merge(arr[s], arr[mid + 1]);
    }

    Node *mergeKLists(vector<Node *> &arr)
    {

        mergeSort(arr, 0, arr.size() - 1);
        return arr[0];
    }
};