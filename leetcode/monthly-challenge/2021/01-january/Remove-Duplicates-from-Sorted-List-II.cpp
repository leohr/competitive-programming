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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL) 
            return NULL; 
        
        ListNode* ans = head; 
        set<int> deletions; 
        // Look for elements to delete
        while (head->next != NULL){
            ListNode* curr = head;
            if (head->val == curr->next->val) 
                deletions.insert(head->val); 
            head = head->next;
        }
        // New loop for actually deleting elements  
        
        // 1) Delete at the begining 
        while (deletions.find(ans->val) != deletions.end()) {
            if (ans->next != NULL)
                ans = ans->next;
            // If cannot delete, must return empty list 
            else 
                return NULL;
        } 
        // 2) Delete at the middle
        head = ans; 
        while (head->next != NULL) {
            while (deletions.find(head->next->val) != deletions.end()) {
                if (head->next->next != NULL) {
                    head->next = head->next->next; 
                    continue; 
                }
                else  {
                    head->next = NULL;  
                    return ans; 
                }
                    
            }
            head = head->next; 
        }
        return ans; 
    }
};