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
    ListNode* middleNode(ListNode* head) {
        
        /*
            appproach 1. fast and slow iterators..fast goes 2 steps at a time, slow               goes 1 step at a time. when fast 2x, slow x+1 : 2x+1 -> x+1 
        */
        ListNode *slow = head, *fast = head;
        if (head==NULL) return head;
        while(fast and fast->next!=NULL) {
            fast = fast->next->next;
            slow = slow->next;
        }            
        
        return slow;
        
        /*        
            approach 2 - iterate list, get the middle element(divide by 2- floor + 1)
            return elements from that index
        
        */
        
        // int i = 0;
        // if(head==NULL) return head;
        // ListNode *arr = head;
        // while(head) {
        //     head = head->next;
        //     i++;
        // }        
        // i = floor(i/2) + 1;        
        // for(int j = 1; j<i ;j++) {            
        //     arr = arr->next;
        // }
        // return arr;
    }
    
};