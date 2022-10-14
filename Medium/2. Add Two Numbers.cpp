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

/*
    - LinkedList node added using "new LinkedList()"
    - Remeber the last carry if any..include in while loop or create separate condition           outside loop to add a new node for the remaning carry	
    - cout<<3+NULL => 3
    - Remeber to create a new list for doing operations(l3), and a new list pointer ansHead       to store head of l3, as l3 is getting traversed in the while loop. Finally return           ansHead->next as the first node of ansHead and l3 are val(0) [from the first line of         intialization]
    - genrally to try to maintain/create a different list for the operations and remember to       store head in another new list pointer
    - while(l1) while(l1!=NULL) both valid..similary in if condition(l1) or (l1!=NULL) are         same
*/

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3 = new ListNode(0);
        ListNode* ansHead = l3;
        int carry = 0;        
        
        while(l1!=NULL || l2!=NULL || carry!=0) {  
            int x = l1?l1->val:0;
            int y = l2?l2->val:0;
            int sum = x + y + carry;                        
            carry = sum/10;
            
            l3->next = new ListNode(sum % 10);
            l3 = l3->next;      
            
            l1 = l1? l1->next:nullptr;
            l2 = l2? l2->next:nullptr;
        }
           
        return ansHead->next;               
        
    }
};