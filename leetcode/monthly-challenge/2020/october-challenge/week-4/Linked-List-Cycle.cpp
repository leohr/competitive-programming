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
    ListNode *detectCycle(ListNode *head) {
        if (head == NULL) 
            return NULL; 
        
        unordered_map<ListNode*, int> pres;
        while (head->next != NULL) {
            if (pres.find(head->next) != pres.end())
                return head->next; 
            ++pres[head]; 
            head = head->next; 
        }
        
        return NULL; 
    }
};