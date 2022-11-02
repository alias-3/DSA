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
    ListNode *findMid(ListNode *head) {
        ListNode *fast=head, *slow=head;
        while(fast && fast->next!=NULL) {            
            slow=slow->next;
            fast=fast->next;
            if(fast) fast=fast->next;
        }
        return slow;
    }
    
    ListNode* listreverse(ListNode *head) {
        if(head==NULL || head->next == NULL) return head;
        ListNode *newHead = listreverse(head->next);
        ListNode *newTail = head->next;
        newTail->next = head;
        head->next = NULL;
        
        return newHead;
    }        
    
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL) return true;
        
        ListNode *mid = findMid(head);
        ListNode *temp = head,*l2= listreverse(mid);                
        
        while(head && l2) {            
            if(head->val != l2->val) return false;
            head = head->next;
            l2 = l2->next;                    
        }        
        
        return true;
        
        
        
        
        /*
            approach 2 using vector to reverse, xtra space
        */
//         if(head==NULL || head->next==NULL) return head;
//         vector<int> arr; 
//         ListNode *l1 = head;
//         while(l1) {            
//             arr.push_back(l1->val);
//             l1 = l1->next;
//         }
//         reverse(arr.begin(),arr.end());
//         ListNode *l2 = new ListNode(0), *curr = l2;
//         for(auto i:arr) {            
//             curr->next = new ListNode(i);            
//             curr = curr->next;            
//         }
//         while(head && l2->next) {            
//             if(head->val != l2->next->val) return false;
//             head = head->next;
//             l2->next = l2->next->next;
//         }
        
//         return true;
    }
};