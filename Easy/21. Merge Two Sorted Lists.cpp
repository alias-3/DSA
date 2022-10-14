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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        /*
            Recursion based approach. Compare heads of l1 and l2, return the less of 
            the two. return one list in case the other list is empty. both lists are             sorted by default.
        */
        
        if(list1 == NULL) return list2;
        if(list2 == NULL) return list1;
        if(list1->val < list2->val) {            
            list1->next = mergeTwoLists(list1->next,list2);
            return list1; 
        }
        else {            
            list2->next = mergeTwoLists(list1,list2->next);
            return list2; 
        }        
        
        
        
        
        
        /*
            approach using vector. put all element in vector, sort them and then                create a new linkd list
        */
        
//         vector<int> arr;
//         while(list1) {
//             arr.push_back(list1->val);
//             list1 = list1->next;
//         }
//         while(list2) {            
//             arr.push_back(list2->val);
//             list2 = list2->next;
//         }
//         sort(arr.begin(),arr.end());
//         ListNode* res = new ListNode(0);
//         ListNode* curr = res;
//         for(auto i:arr) {
//             curr->next = new ListNode(i);
//             curr = curr->next;
//         }
        
//         return res->next;
    }
};