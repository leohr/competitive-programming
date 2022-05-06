# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        # Get list size 
        k = 1
        h = head
        while h.next != None: 
            k += 1
            h = h.next 
            
        if k == n: 
            return head.next
        
        p0 = p1 = head
        p2 = head.next
        for i in range(k-n-1):
            p1 = p1.next
            p2 = p2.next
        p1.next = p2.next
        return p0