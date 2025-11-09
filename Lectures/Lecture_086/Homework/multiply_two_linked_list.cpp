/* Linked list node structure
struct Node
{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};*/

/*The method multiplies
two  linked lists l1 and l2
and returns their product*/

/* Multiply contents of two linked lists */
class solution
{
public:
    long long multiplyTwoLists(Node *first, Node *second)
    {
        long long MOD = 1000000007;

        long long num1 = 0, num2 = 0;

        // Convert first list to number under modulo
        while (first != NULL)
        {
            num1 = (num1 * 10 + first->data) % MOD;
            first = first->next;
        }

        // Convert second list to number under modulo
        while (second != NULL)
        {
            num2 = (num2 * 10 + second->data) % MOD;
            second = second->next;
        }

        // Final multiplication under modulo
        return (num1 * num2) % MOD;
    }
};