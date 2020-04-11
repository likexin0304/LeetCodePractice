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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*> map;

        if(headA == NULL || headB == NULL)
        {
            return NULL;
        }
        ListNode* temp = headA;
        ListNode* temp1 = headB;
        while(temp != NULL)
        {
            map.insert(temp);
            temp = temp->next;
        }
        while(temp1 != NULL)
        {
            if(map.find(temp1) != map.end())
            {
                return temp1;
            }
            temp1 = temp1->next;
        }
        return NULL;

    }
};
