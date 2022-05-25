# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        def solve(list1, list2):
            if list1 is None and list2 is None: 
                return(None)
            
            elif list1 is None: 
                return(list2) 
            
            elif list2 is None: 
                return(list1) 
            
            else: 
                v1, v2 = list1.val, list2.val 
                if v1 <= v2: 
                    list1 = list1.next 
                    ans = ListNode(v1, solve(list1, list2))
                else: 
                    list2 = list2.next 
                    ans = ListNode(v2, solve(list1, list2)) 
                return(ans) 
        
        return(solve(list1, list2)) 
                    
            
