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
    
    int gcd(int a,int b){
        while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
    }
    
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
         if (head == nullptr || head->next == nullptr) {
            return head;
        }
        ListNode* fir=head;
        ListNode* sec=fir->next;
        int temp=0;
        while(sec!=nullptr){
            temp=gcd(fir->val,sec->val); 
            ListNode* tempnode = new ListNode(temp);
            fir->next=tempnode;
            
            tempnode->next=sec;
            fir=sec;
            sec=fir->next;
        }
        return head;
    }
};

