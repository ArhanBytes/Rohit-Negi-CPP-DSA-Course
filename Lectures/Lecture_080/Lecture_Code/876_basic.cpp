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
    ListNode *middleNode(ListNode *head)
    {
        ListNode *temp = head;

        // count the number of node
        int count = 0;
        while (temp)
        {
            count++;
            temp = temp->next;
        }

        // search the mid element
        count /= 2;
        temp = head;

        while (count--)
            temp = temp->next;

        return temp;
    }
};