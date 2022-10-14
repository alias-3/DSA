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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL) return head;
        vector<int> arr;
        while(head) {
            arr.push_back(head->val);
            head = head->next;            
        }
        k = k % arr.size();
        reverse(arr.begin(),arr.end());
        reverse(arr.begin(),arr.begin()+k);
        reverse(arr.begin()+k,arr.end());
        for(auto i:arr) cout<<i<<'\t';
        
        ListNode *res = new ListNode(0);
        ListNode *curr = res;
        for(auto j:arr) {            
            curr->next = new ListNode(j);
            curr = curr->next;
        }
        
        return res->next;
    }
};