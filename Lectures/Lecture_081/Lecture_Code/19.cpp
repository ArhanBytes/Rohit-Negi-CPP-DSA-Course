/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        // 1: count the number of nodes
        ListNode *temp = head;
        int count = 0;
        while (temp)
        {
            count++;
            temp = temp->next;
        }

        // 2: number of jumps that i need to get to removing node
        count -= n;
        // if it is the first node that need to be removed
        if (count == 0)
        {
            temp = head;
            head = head->next;
            delete temp;

            return head;
        }
        // other than first node
        ListNode *curr = head;
        ListNode *prev = NULL;

        while (count--)
        {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;

        delete curr;

        return head;
    }
};