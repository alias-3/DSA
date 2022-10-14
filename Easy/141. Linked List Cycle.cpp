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
        
        /*
            approach - two pointers fast and slow, fast travels 2x, slow 1x. 
            if cycle is there, then they should meet (fast=slow). 
        */
        ListNode *slow = head, *fast = head;
        
        if(head==NULL or head->next==NULL) return false;
        
        while(fast && fast->next!=NULL) {                        
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow) return true;
        }
        
        return false;
                    
        
        
        /*
            approach - save <key- nodeptr,val-index> in map.if nodeptr repeats, return nodeptr of the cyclic node
        */
        // int i = 0;
        // if(head==NULL) return false;
        // unordered_map<ListNode*, int> mp;
        // while(head) {
        //     if(mp.count(head)){
        //         return true;
        //     }
        //     else {
        //         mp[head] = i;
        //         head = head->next;
        //         i++;
        //     }
        // }
        // return false;
              
    }
};