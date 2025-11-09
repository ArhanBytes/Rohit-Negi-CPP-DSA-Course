/*
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution
{
public:
    Node *intersectPoint(Node *head1, Node *head2)
    {
        //  Code Here
        // find the length of L1
        Node *curr1 = head1;
        int count1 = 0;

        while (curr1)
        {
            count1++;
            curr1 = curr1->next;
        }

        // find the length of L2
        Node *curr2 = head2;
        int count2 = 0;
        while (curr2)
        {
            count2++;
            curr2 = curr2->next;
        }

        // if L1 is greater than increase till length of L1 = L2
        curr1 = head1;
        while (count1 > count2)
        {
            count1--;
            curr1 = curr1->next;
        }

        // if L2 is greater than increase till length of L1 = L2
        curr2 = head2;
        while (count2 > count1)
        {
            count2--;
            curr2 = curr2->next;
        }

        // loop until we find intersect point
        while (curr1 != curr2)
        {
            curr1 = curr1->next;
            curr2 = curr2->next;
        }

        // if both are NULL means there is no intersect point
        if (!curr1)
            return NULL;

        return curr1;
    }
};