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
void printList(ListNode* head) {
    ListNode* temp = head; 
    while (temp->val != NULL) {
        cout << temp->val << " " ; 
        temp = temp->next; 
    }
    cout << endl; 
}
class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        if (head == NULL || head->next == NULL) 
            return head; 
        
        ListNode* sorted = head; 
        head = head->next; 
        sorted->next = NULL; 
        
        while (head != NULL) {
            // Case 1: Value goes first
            if (head->val < sorted->val) {
                ListNode* newSorted = head; 
                head = head->next; 
                newSorted->next = sorted; 
                sorted = newSorted; 
                continue; 
            }
            ListNode* temp = sorted;
            bool last = false; 
            // Case 2: Value goes at the end 
            if (temp->next == NULL) {
                last = true; 
            }
            while (!last && head->val >= temp->next->val) {
                temp = temp->next; 
                if (temp->next == NULL) {
                    last = true; 
                    break; 
                }
            }
            ListNode* newNode = head; 
            head = head->next;             
            if (last) {
                newNode->next = NULL; 
                temp->next = newNode; 
                continue; 
            } else { // Case 3: Value goes in the middle 
                newNode->next = temp->next; 
                temp->next = newNode; 
                continue; 
            }
        }
        
        return sorted; 
    }
};