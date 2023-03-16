/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public TreeNode insert(ArrayList<Integer> list, int low, int high){
        if(low <= high){
            int mid = low + (high-low) / 2;
            TreeNode newNode = new TreeNode(list.get(mid));
            newNode.left = insert(list, low, mid-1);
            newNode.right = insert(list, mid+1, high);

            return newNode;
        }
        return null;
    }
  
    public TreeNode sortedListToBST(ListNode head) {
        ArrayList<Integer> list = new ArrayList<Integer>();
        while(head != null){
            list.add(head.val);
            head = head.next;
        }
        return insert(list, 0, list.size()-1);
    }
}
