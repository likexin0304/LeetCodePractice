/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL || head->next == NULL)
        {
            return false;
        }
        ListNode* temp = head;
        ListNode* temp1 = head->next;
        while(temp != temp1)
        {
            if(temp1 == NULL || temp1->next == NULL)
            {
                return false;
            }
            else
            {
                temp = temp->next;
                temp1 = temp1->next->next;
            }

        }
        return true;  
    }
};
