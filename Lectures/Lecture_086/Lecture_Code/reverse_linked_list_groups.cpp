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
    Node *reverseKGroup(Node *head, int k)
    {
        // Add the Node 0 at the start to make our code easy
        Node *first = new Node(0);
        first->next = head;
        head = first;
        Node *front = NULL;

        // reverse by groups
        while (first->next != NULL)
        {
            // reverse each group
            Node *second = first->next;
            Node *prev = first;
            Node *curr = second;
            int x = k;
            while (x && curr)
            {
                front = curr->next;
                curr->next = prev;
                prev = curr;
                curr = front;
                x--;
            }

            first->next = prev;
            second->next = curr;

            first = second;
        }

        // remove the 0 element at start
        Node *temp = head;
        head = head->next;
        delete temp;

        return head;
    }
};