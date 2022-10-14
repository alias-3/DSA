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
        
        /* approach of vector
            - Create a new vector, copy all vals from linkd list to vector, reverse vector, 
              create a new linked list containing values from reversed vector
              T(N), O(N) as extra vector of n size needed
            - create a l1 and a curr so that l1 remembers the head adress of new list and
              curr starts traversal. return l1->next as l1.val = 0(the iniitialisation)..
              we need to return list from next node
        */
        vector<int> a;
        while(head) {
            a.push_back(head->val);
            head = head->next;
        }
        reverse(a.begin(),a.end());
        ListNode* l1 = new ListNode(0);
        ListNode* curr = l1; 
        for(auto i:a) {
            curr->next = new ListNode(i);
            curr = curr->next;
        }
        
        return l1->next;
    }
};