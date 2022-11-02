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
    ListNode* reverseList(ListNode* head) {
        
        /*
            recursion anuj bhaiya video
            1    ->  [ 23 -> .... -> 49]
            head     newtail         newHead
        */
        
        if(head==NULL || head->next ==NULL) return head;
        
        ListNode* newHead = reverseList(head->next);
        ListNode* newTail = head->next;
        newTail->next  = head;
        newTail->next->next = NULL;
            
        return newHead;
        
        
        
        /*
            approach iterative, no extra vector
            1 -> 3-> 4-> 5 -> NULL
            no modification to head, just store new curr = head, need of temp for storing head->next as we will lose if we break connection between 1 and 3 if we point 1 to NULL(prev).
            
            - first store temp = curr(1)->next, store (3)
            - point curr(1)->next to prev(in this case NULL, but diff in remaining cases)
            - make new prev = curr(1) , ie shift prev with each iteration
            - make curr = temp, ie shifted curr to temp(wihch was curr->next)            
        */
//         ListNode *curr=head, *prev=NULL, *temp;
//         if(head==NULL || head->next==NULL) return head;
        
//         while(curr) {
//             temp = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = temp;            
//         }
        
//         return prev;
        
        
        
                
        
        
        /* approach of vector
            - Create a new vector, copy all vals from linkd list to vector, reverse vector, 
              create a new linked list containing values from reversed vector
              T(N), O(N) as extra vector of n size needed
            - create a l1 and a curr so that l1 remembers the head adress of new list and
              curr starts traversal. return l1->next as l1.val = 0(the iniitialisation)..
              we need to return list from next node
        */
//         vector<int> a;
//         while(head) {
//             a.push_back(head->val);
//             head = head->next;
//         }
//         reverse(a.begin(),a.end());
//         ListNode* l1 = new ListNode(0);
//         ListNode* curr = l1; 
//         for(auto i:a) {
//             curr->next = new ListNode(i);
//             curr = curr->next;
//         }
        
//         return l1->next;
    }
};