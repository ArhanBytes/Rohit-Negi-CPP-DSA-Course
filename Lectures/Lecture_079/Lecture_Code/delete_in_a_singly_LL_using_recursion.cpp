/*
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution
{
public:
    Node *deleteNode(Node *head, int x)
    {
        // base case
        if (x == 1)
        {
            Node *temp = head->next;
            delete head;
            return temp;
        }

        head->next = deleteNode(head->next, x - 1);

        return head;
    }
};