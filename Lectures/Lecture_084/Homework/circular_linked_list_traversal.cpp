/* structure for a node
struct Node
{
    int data;
    struct Node *next;
}; */

/* Function to print nodes in a given Circular linked list */
void printList(struct Node *head)
{
    // code here
    Node *curr = head;

    do
    {
        cout << curr->data << " ";
        curr = curr->next;
    } while (curr != head);
}