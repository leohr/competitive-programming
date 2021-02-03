class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode*, int> mp; 
        while (head != NULL) {
            ++mp[head]; 
            if (mp[head] == 2) 
                return true; 
            head = head->next; 
        }
        return false; 
    }
};