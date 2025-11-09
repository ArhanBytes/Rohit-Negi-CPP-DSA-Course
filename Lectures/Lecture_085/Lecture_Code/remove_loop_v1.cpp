/*
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/
class Solution
{
public:
    void removeLoop(Node *head)
    {
        // 1: find is there any loop
        Node *slow = head;
        Node *fast = head;

        bool isLoop = false;
        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
            {
                isLoop = true;
                break;
            }
        }

        if (isLoop)
        {
            // start slow with head
            slow = head;

            // this will lead us to point where the loop begins
            while (slow != fast)
            {
                slow = slow->next;
                fast = fast->next;
            }

            // reach to the point where the loop should be break;
            while (slow->next != fast)
                slow = slow->next;

            slow->next = NULL;
        }
    }
};