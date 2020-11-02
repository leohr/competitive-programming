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
    int getDecimalValue(ListNode* head) {
        stack<int> s; 
        while (head != NULL) {
            s.push(head->val); 
            head = head->next; 
        }
        int ans = 0;
        int x = 1; 
        while (!s.empty()) {
            ans += s.top()*x; 
            x *= 2; 
            s.pop(); 
        }
        return ans; 
    }
};