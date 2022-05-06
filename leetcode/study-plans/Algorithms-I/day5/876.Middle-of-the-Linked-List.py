# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if (head.next) == None: 
            return head 
        
        i = 1
        d = {}
        while head.next != None: 
            head = head.next 
            d[i] = head
            i += 1 
        return d[int(i/2)]