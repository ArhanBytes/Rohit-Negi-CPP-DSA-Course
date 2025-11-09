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
            // 2: find the length of loop
            slow = slow->next;
            int count = 1;

            while (slow != fast)
            {
                count++;
                slow = slow->next;
            }

            // 3: slow points to head
            // fast points after the length of loop from the slow
            slow = head, fast = head;
            while (count--)
                fast = fast->next;

            // 4: find the point where the loop begins
            while (slow != fast)
            {
                slow = slow->next;
                fast = fast->next;
            }

            // 5: reach to the point where the loop should break;
            while (slow->next != fast)
                slow = slow->next;

            slow->next = NULL;
        }
    }
};