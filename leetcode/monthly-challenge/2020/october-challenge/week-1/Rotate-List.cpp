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
    int getListLen(ListNode* head) {
        int ans = 1; 
        while (head->next) {
            head = head->next; 
            ++ans; 
        }
        return ans; 
    }
    
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head)
            return NULL; 
        
        if (k == 0)
            return head; 
        
        int n = getListLen(head); 
        k = k % n; 
        
        ListNode *first = head, *ans;  
        int counter = 0, ansLen = 0; 
        while (true) {
            ++counter; 
            if (counter >= n-k) 
                ++ansLen; 
                
            if (counter == n)
                head->next = first; 
            
            if (counter == n-k)
                ans = head -> next; 
                           
            head = head -> next; 
    
            if (ansLen == n)
                break; 
        }  
        
        head -> next = NULL; 
        
        return ans; 
    }
};
