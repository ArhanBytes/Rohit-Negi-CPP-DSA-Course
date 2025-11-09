// User function Template for C++

/*struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};*/
class Solution
{
public:
    Node *reverseBetween(int a, int b, Node *head)
    {
        // code here
        Node *first = new Node(0);
        first->next = head;
        head = first;

        // REACH the first one before ath
        int x = a;
        while (--x)
            first = first->next;

        // LET REVERSE THE SUBLIST
        Node *second = first->next;
        Node *prev = first;
        Node *curr = second;

        // Number of node in sublist
        int range = b - a + 1;
        Node *front;
        while (range)
        {
            front = curr->next;
            curr->next = prev;
            prev = curr;
            curr = front;
            range--;
        }

        first->next = prev;
        second->next = curr;

        // REMOVE THE INITIAL NODE 0
        Node *temp = head;
        head = head->next;
        delete temp;

        return head;
    }
};