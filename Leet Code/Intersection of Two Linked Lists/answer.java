public class Solution {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
    HashSet<ListNode> s = new HashSet<>();
        ListNode curr = headA;
        while(curr!=null){
            s.add(curr);
            curr = curr.next;
        }
        curr = headB;
        while(curr!=null){
            if(s.contains(curr)) return curr;
            curr = curr.next;
        }
      return null;
    }
}
