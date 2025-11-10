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
    Node *find_mid(Node *head)
    {
        Node *slow = head;
        Node *fast = head;

        while (fast->next != NULL && fast->next->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }

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

    Node *mergeSort(Node *left)
    {
        // base case
        if (left->next == NULL)
            return left;

        Node *middle = find_mid(left);
        Node *right = middle->next;
        middle->next = NULL;

        left = mergeSort(left);
        right = mergeSort(right);

        return merge(left, right);
    }
};