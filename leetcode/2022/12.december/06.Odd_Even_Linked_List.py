# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def oddEvenList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        # Edge cases 
        if head is None or head.next is None or head.next.next is None: 
            return head
        # General case  
        oddStart, oddHead = ListNode(head.val), ListNode(head.val)
        evenStart, evenHead = ListNode(head.next.val), ListNode(head.next.val)
        head = head.next
        alternate = True
        while not head.next is None: 
            if alternate:
                oddHead.next = ListNode(head.next.val)
                oddHead = oddHead.next
                if oddStart.next is None: 
                    oddStart.next = oddHead
            else: 
                evenHead.next = ListNode(head.next.val)
                evenHead = evenHead.next
                if evenStart.next is None: 
                    evenStart.next = evenHead
            alternate = not alternate 
            head = head.next
        oddHead.next = evenStart
        return oddStart  
                
            
