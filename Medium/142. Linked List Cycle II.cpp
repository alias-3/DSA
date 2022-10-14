/*
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        if(head == NULL) return head;    
            
        unordered_map<ListNode*, int> mp;                
        int i = 0;
        while(head) {
            //cout<<i<<head<<endl;
            if(mp.count(head)) {                
                return head;
            }
            else{
                mp[head] = i; 
                head = head->next;
                i++;    
            }            
        } 
        return head;
    }
};