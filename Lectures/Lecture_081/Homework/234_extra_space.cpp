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
    bool isPalindrome(ListNode *head)
    {
        vector<int> elems;
        int count = 0;
        ListNode *temp = head;

        while (temp)
        {
            elems.push_back(temp->val);
            count++;
            temp = temp->next;
        }

        int s = 0, e = count - 1;

        while (s < e)
        {
            if (elems[s] != elems[e])
                return false;
            s++, e--;
        }

        return true;
    }
};