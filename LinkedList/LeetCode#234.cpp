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
    bool isPalindrome(ListNode* head) {
        vector<int> v;
        ListNode* temp = head;
        while(temp != NULL){
            v.push_back(temp->val);
            temp = temp->next;
        }
        // 判断是否回文
        for(int i=0; i<v.size()/2; ++i){
            if(v[i] != v[v.size()-1-i]){
                return false;
            }
        }
        return true;


    }
};
