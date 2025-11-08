/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution
{
public:
    int lengthOfLoop(Node *head)
    {
        // code here
        Node *slow = head;
        Node *fast = head;

        bool isLoop = false;
        // detect the loop first
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
            {
                isLoop = true;
                break;
            }
        }

        // now count the number of nodes in a loop
        int count = 0;
        if (isLoop)
        {
            do
            {
                count++;
                slow = slow->next;
            } while (slow != fast);
        }

        return count;
    }
};