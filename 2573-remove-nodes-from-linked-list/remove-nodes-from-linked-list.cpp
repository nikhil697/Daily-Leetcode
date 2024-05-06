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
class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        if(head==nullptr || head->next==nullptr){
            return head;
        }
        ListNode* nextnode= removeNodes(head->next);

        if(head->val<nextnode->val){
            delete head;
            return nextnode;
        }
        head->next=nextnode;
        return head;
        
    }
};