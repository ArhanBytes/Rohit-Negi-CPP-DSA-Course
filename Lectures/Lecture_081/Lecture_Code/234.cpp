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
    // function to reverse the linkedlist
    ListNode *rev(ListNode *curr, ListNode *prev)
    {
        // base case
        if (curr == NULL)
            return prev;

        // recursive approach
        ListNode *future = curr->next;
        curr->next = prev;

        return rev(future, curr);
    }
    bool isPalindrome(ListNode *head)
    {
        // edge case: if there is only one node
        if (head->next == NULL)
            return true;

        // 1: count the number of node
        ListNode *temp = head;
        int count = 0;
        while (temp)
        {
            count++;
            temp = temp->next;
        }

        // half the linked list
        count = count / 2;

        ListNode *prev = NULL;
        ListNode *curr = head;

        while (count--)
        {
            prev = curr;
            curr = curr->next;
        }

        prev->next = NULL;

        // reverse the second splitted linked list
        curr = rev(curr, NULL); // curr pointer points the second splitted linked list
        temp = head;            // temp pointer points the first splitted linked list


        // now check each for palindrome
        while (temp && curr)
        {
            if (temp->val != curr->val)
                return false;
            temp = temp->next;
            curr = curr->next;
        }

        return true;
    }
};